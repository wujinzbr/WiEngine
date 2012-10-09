/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_PELoader */

#ifndef _Included_com_wiyun_engine_box2d_PELoader
#define _Included_com_wiyun_engine_box2d_PELoader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    nativeNewBodyLoader
 * Signature: (Ljava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_PELoader_nativeNewBodyLoader__Ljava_lang_String_2Z
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    nativeNewBodyLoader
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_PELoader_nativeNewBodyLoader__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    nativeCreateBodyByName
 * Signature: (Lcom/wiyun/engine/box2d/Box2D;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_PELoader_nativeCreateBodyByName
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    nativeGetAnchorPercent
 * Signature: (Ljava/lang/String;Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_PELoader_nativeGetAnchorPercent
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    getPlistFormat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_PELoader_getPlistFormat
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    getMeterPixels
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_PELoader_getMeterPixels
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_PELoader
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_PELoader_destroy
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
