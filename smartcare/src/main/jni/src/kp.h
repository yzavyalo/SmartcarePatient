/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

/* Header for class com_petrsu_cardiacare_smartcarequestionnaire_MainActivity */

#ifndef _Included_com_petrsu_cardiacare_smartcare_SmartCareLibrary
#define _Included_com_petrsu_cardiacare_smartcare_SmartCareLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_petrsu_cardiacare_smartcarevolunteer_MainActivity
 * Method:    connectSmartSpace
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jlong JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_connectSmartSpace
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_petrsu_cardiacare_smartcarevolunteer_MainActivity
 * Method:    disconnectSmartSpace
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_disconnectSmartSpace
  (JNIEnv *, jobject, jlong);

/*****************************************************************************************/

JNIEXPORT jstring JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_initPatient
  (JNIEnv *, jobject, jlong);

JNIEXPORT jstring JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_initAuthRequest
        (JNIEnv *, jobject, jlong, jstring);

JNIEXPORT jstring JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_initLocation
        (JNIEnv *, jobject, jlong, jstring);

JNIEXPORT jstring JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_sendAlarm
        (JNIEnv *, jobject, jlong, jstring);

JNIEXPORT jint JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_sendLocation
        (JNIEnv *, jobject, jlong, jstring, jstring, jstring, jstring);

JNIEXPORT void JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_removeIndividual
        (JNIEnv*, jobject, jlong, jstring);

JNIEXPORT void JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_removeAlarm
(JNIEnv*, jobject, jlong, jstring);

JNIEXPORT jint JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_insertPersonName
        (JNIEnv *, jobject , jlong , jstring , jstring );

JNIEXPORT jint JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_updatePersonName
        (JNIEnv *, jobject , jlong , jstring , jstring );

JNIEXPORT jint JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_getAuthResponce
        (JNIEnv *, jobject , jlong , jstring);

/*****************************************************************************************/



JNIEXPORT jobject JNICALL Java_com_petrsu_cardiacare_smartcare_SmartCareLibrary_getQuestionnaire
(JNIEnv *, jobject, jlong);



#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_petrsu_cardiacare_smartcarequestionnaire_MainActivity_PatientListTask */

#ifndef _Included_com_petrsu_cardiacare_smartcare_SmartCare_PatientListTask
#define _Included_com_petrsu_cardiacare_smartcare_SmartCare_PatientListTask
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
