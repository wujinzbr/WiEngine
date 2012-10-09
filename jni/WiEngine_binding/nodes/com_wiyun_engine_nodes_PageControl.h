/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_PageControl */

#ifndef _Included_com_wiyun_engine_nodes_PageControl
#define _Included_com_wiyun_engine_nodes_PageControl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    addPage
 * Signature: (Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_addPage
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    addPageAt
 * Signature: (Lcom/wiyun/engine/nodes/Node;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_addPageAt
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    removePage
 * Signature: (Lcom/wiyun/engine/nodes/Node;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_removePage
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    removePageAt
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_removePageAt
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setInitialPage
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setInitialPage
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    gotoPage
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_gotoPage__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    gotoPage
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_gotoPage__IF
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setPageSpacing
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setPageSpacing
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    getPageSpacing
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_PageControl_getPageSpacing
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    getCenterY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_PageControl_getCenterY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setCenterY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setCenterY
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    getCenterX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_PageControl_getCenterX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setCenterX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setCenterX
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    getPageCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_PageControl_getPageCount
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setCallback
 * Signature: (Lcom/wiyun/engine/nodes/PageControl/IPageControlCallback;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setCallback
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    isVertical
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_PageControl_isVertical
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setVertical
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setVertical
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    removeAllPages
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_removeAllPages
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    setPageIndicator
 * Signature: (Lcom/wiyun/engine/nodes/PageIndicator;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_PageControl_setPageIndicator
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_PageControl
 * Method:    getPageIndicatorPointer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_PageControl_getPageIndicatorPointer
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
