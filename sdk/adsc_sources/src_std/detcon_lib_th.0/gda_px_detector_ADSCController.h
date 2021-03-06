/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gda_px_detector_ADSCController */

#ifndef _Included_gda_px_detector_ADSCController
#define _Included_gda_px_detector_ADSCController
#ifdef __cplusplus
extern "C" {
#endif
#undef gda_px_detector_ADSCController_IDLE
#define gda_px_detector_ADSCController_IDLE 0L
#undef gda_px_detector_ADSCController_EXPOSING
#define gda_px_detector_ADSCController_EXPOSING 1L
#undef gda_px_detector_ADSCController_READING
#define gda_px_detector_ADSCController_READING 2L
#undef gda_px_detector_ADSCController_ERROR
#define gda_px_detector_ADSCController_ERROR 3L
#undef gda_px_detector_ADSCController_CONFIGDET
#define gda_px_detector_ADSCController_CONFIGDET 4L
#undef gda_px_detector_ADSCController_NONE
#define gda_px_detector_ADSCController_NONE 0L
#undef gda_px_detector_ADSCController_X2
#define gda_px_detector_ADSCController_X2 1L
#undef gda_px_detector_ADSCController_SLOW
#define gda_px_detector_ADSCController_SLOW 0L
#undef gda_px_detector_ADSCController_FAST
#define gda_px_detector_ADSCController_FAST 1L
/*
 * Class:     gda_px_detector_ADSCController
 * Method:    initFIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gda_px_detector_ADSCController_initFIDs
  (JNIEnv *, jclass);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDStartExposure
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDStartExposure
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDStopExposure
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDStopExposure
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDStatus
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDState
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetFileName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetFileName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetReadFileName
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetReadFileName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDGetFilePar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDGetFilePar
  (JNIEnv *, jobject, jint);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDGetHwPar
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDGetHwPar
  (JNIEnv *, jobject, jint);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderDistance
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderDistance
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderWavelength
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderWavelength
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderBeamX
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderBeamX
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderBeamY
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderBeamY
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderTime
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderTime
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderOscillation
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderOscillation
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetHeaderPhi
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetHeaderPhi
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetReadFile
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetReadFile
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDClearReadFile
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDClearReadFile
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDHardBin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDHardBin
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSoftBin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSoftBin
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDNoBin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDNoBin
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDNoBin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDUseStoredDark
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDNoBin
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDNoUseStoredDark
  (JNIEnv *, jobject);


/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSlowAdc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSlowAdc
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDFastAdc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDFastAdc
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDGetAdc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDGetAdc
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSaveRaw
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSaveRaw
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDNoRaw
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDNoRaw
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetXform
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetXform
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDClearXform
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDClearXform
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetDark0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetDark0
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetDark1
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetDark1
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDClearDark
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDClearDark
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDAutoDarkMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDAutoDarkMode
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDManualDarkMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDManualDarkMode
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDSetLastImage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDSetLastImage
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDClearLastImage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDClearLastImage
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDGetImage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDGetImage
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDCorrectImage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDCorrectImage
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDWriteImage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDWriteImage
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDGetLastError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDGetLastError
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDAbort
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDAbort
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDReset
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDReset
  (JNIEnv *, jobject);

/*
 * Class:     gda_px_detector_ADSCController
 * Method:    doCCDInitialize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gda_px_detector_ADSCController_doCCDInitialize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
