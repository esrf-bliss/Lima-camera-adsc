/*
 *      unix
 */

#ifdef unix
#include        <stdio.h>
#include        <math.h>
#include        <errno.h>
#include        <sys/types.h>
#include        <sys/time.h>
#include        <sys/socket.h>
#include        <netinet/in.h>
#include        <netdb.h>
#include        <string.h>
#include        <unistd.h>
#include        <stdlib.h>
#endif /* unix */



/*
 *  Win NT includes
 */

#ifdef  WINNT
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <winsock.h>
#include <time.h>
#include <sys/timeb.h>
#include <malloc.h>
#include <io.h>
#include <errno.h>
#include "windows.h"
#endif /* WINNT */

#define MAX_CONTROLLERS         9

#include	"q_moddef.h"

extern	FILE	*fpout;
extern	FILE	*fperr;

/*
 *      data base detector definition.
 */

extern  struct q_moddef qm[MAX_CONTROLLERS];

/*
 *      host, port database
 */

extern  int     q_ncon;                                 /* number of connections which need to be made */
extern  char    q_hostnames[MAX_CONTROLLERS][256];      /* host name */
extern  int     q_ports[MAX_CONTROLLERS];               /* port numbers */
extern	int		q_dports[MAX_CONTROLLERS];				/* data ports */
extern	int		q_sports[MAX_CONTROLLERS];				/* secondary command ports */

extern  int     q_blocks[MAX_CONTROLLERS][MAX_CONTROLLERS];
extern  int     q_states[MAX_CONTROLLERS];
extern	int		q_issync[MAX_CONTROLLERS];
extern	int		q_nctrl;

void	mult_host_dbfd_setup()
{
	int		i, j, k, found, n;
	char	*cptr;
	int		n_ctrl;
	static  char	modnames_nums[MAX_CONTROLLERS] = 
				{'0', '1', '2', '3', '4', '5', '6', '7', '8'};
	static  char	modnames[MAX_CONTROLLERS] = 
				{'W', 'X', 'Z', 'Y', '+', '+', '+', '+', '+'};
	char	thishost[256];
	char	det_dbname[256];
	int		get_moddb(struct q_moddef *qm, int max_c, char *fname, int ingore);
	void	print_moddb(struct q_moddef *qm, int n_c);
	void	order_modules(struct q_moddef *qm, int maxc, int *pvec);
	int		pvec[MAX_CONTROLLERS];
	struct	q_moddef qmt[MAX_CONTROLLERS];

    if(NULL != (cptr = (char *) getenv("CCD_DETECTOR_DB")))
	  	strcpy(det_dbname, cptr);
	else
		strcpy(det_dbname, "detector_db.txt");
	cptr = det_dbname;

	if(0 == (n_ctrl = get_moddb(qm, MAX_CONTROLLERS, cptr, 1)))
	{
		fprintf(fperr,"ccd_dc_api_plus: WARNING: Detector database %s failed to load.\n",cptr);
	    /*
         *      Initialize the detector database, as far as the items here are
         *      concerned, so that the default in the absence of a database is
         *      to behave as it did previously.
         */
		gethostname(thishost, sizeof thishost);
        for(i = 0; i < MAX_CONTROLLERS; i++)
        {
            qm[i].q_def = 1;
            if(i == 0)
				qm[i].q_type = 0;
            else
				qm[i].q_type = 1;
            qm[i].q_serial = 0;
            qm[i].q_bn = i;
	    if(MAX_CONTROLLERS == 9)
            	qm[i].q_assign = modnames_nums[i];
	    else
            	qm[i].q_assign = modnames[i];
            qm[i].q_rotate = 0;     /* don't care about this */
            strcpy(qm[i].q_host, thishost);
            qm[i].q_port = 8041;
			qm[i].q_dport = 8042;
			qm[i].q_sport = 8049;
			n_ctrl = MAX_CONTROLLERS;
        }

	}
	/*
	 *	Reorder the database in "module order".
	 */

	for(i = 0; i < MAX_CONTROLLERS; i++)
		pvec[i] = i;

	order_modules(qm, n_ctrl, pvec);

	for(i = 0; i < n_ctrl; i++)
		qmt[i] = qm[pvec[i]];
	for(i = 0; i < n_ctrl; i++)
		qm[i] = qmt[i];

	print_moddb(qm, n_ctrl);
	fflush(fpout);
	/*
	 *      Sort the data base into unique host/port combinations.  Allow a host
	 *      to have more than one port defined (multiple copies on the same machine, 
	 *		different port).
	 */
	q_ncon = 0;
	for(i = 0; i < n_ctrl; i++)
	{
        found = 0;
        for(j = 0; j < q_ncon; j++)
        {
            if(0 == strcmp(qm[i].q_host, q_hostnames[j]) && qm[i].q_port == q_ports[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            strcpy(q_hostnames[q_ncon], qm[i].q_host);
			q_ports[q_ncon] = qm[i].q_port;
			q_dports[q_ncon] = qm[i].q_dport;
			q_sports[q_ncon] = qm[i].q_sport;
            q_ncon++;
        }
	}
	for(n = 0; n < q_ncon; n++)
	{
		q_states[n] = 0;
		q_issync[n] = 0;
	}
	for(i = 0; i < n_ctrl; i++)
	{
		for(j = 0; j < n_ctrl; j++)
		if(qm[j].q_assign == modnames[i] || qm[j].q_assign == modnames_nums[i])
		{
			for(n = 0; n < q_ncon; n++)
				if((0 == strcmp(q_hostnames[n], qm[j].q_host)) && q_ports[n] == qm[j].q_port)
				{
					q_blocks[n][q_states[n]++] = i;
					if(qm[j].q_type == 0)
						q_issync[n] = 1;
					break;
				}
		}
	}
	q_nctrl = 0;
	for(n = 0; n < q_ncon; n++)
		for(k = 0; k < q_states[n]; k++)
			q_nctrl++;


	fprintf(fpout,"\nSummary of block assignment by host (q_ncon: %d).\n",q_ncon);
	for(n = 0; n < q_ncon; n++)
	{
		fprintf(fpout,"states[%d]: %d  blocks: ",n,q_states[n]);
		for(j = 0; j < q_states[n]; j++)
			fprintf(fpout," %d ",q_blocks[n][j]);
		if(q_issync[n])
			fprintf(fpout," Triggers Detector Sync");
		fprintf(fpout,"\n");
	}
	fprintf(fpout,"\n");
}
