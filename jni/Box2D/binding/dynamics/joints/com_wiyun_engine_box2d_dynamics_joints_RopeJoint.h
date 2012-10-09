/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_RopeJoint */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_RopeJoint
#define _Included_com_wiyun_engine_box2d_dynamics_joints_RopeJoint
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_INACTIVE
#define com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_INACTIVE 0L
#undef com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_AT_LOWER
#define com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_AT_LOWER 1L
#undef com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_AT_UPPER
#define com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_AT_UPPER 2L
#undef com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_EQUAL
#define com_wiyun_engine_box2d_dynamics_joints_RopeJoint_LIMIT_STATE_EQUAL 3L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    getMaxLength
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_getMaxLength
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    setMaxLength
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_setMaxLength
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    getLength
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_getLength
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_RopeJoint
 * Method:    getLimitState
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_RopeJoint_getLimitState
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
