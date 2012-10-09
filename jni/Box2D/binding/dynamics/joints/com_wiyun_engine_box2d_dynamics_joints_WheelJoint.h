/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_WheelJoint */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_WheelJoint
#define _Included_com_wiyun_engine_box2d_dynamics_joints_WheelJoint
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_INACTIVE
#define com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_INACTIVE 0L
#undef com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_AT_LOWER
#define com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_AT_LOWER 1L
#undef com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_AT_UPPER
#define com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_AT_UPPER 2L
#undef com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_EQUAL
#define com_wiyun_engine_box2d_dynamics_joints_WheelJoint_LIMIT_STATE_EQUAL 3L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    nativeGetLocalAxisA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_nativeGetLocalAxisA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getJointTranslation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getJointTranslation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getJointSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getJointSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    isMotorEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_isMotorEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    enableMotor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_enableMotor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    setMotorSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_setMotorSpeed
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getMotorSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getMotorSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    setMaxMotorTorque
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_setMaxMotorTorque
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getMaxMotorTorque
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getMaxMotorTorque
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getMotorTorque
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getMotorTorque
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    setSpringFrequencyHz
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_setSpringFrequencyHz
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getSpringFrequencyHz
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getSpringFrequencyHz
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    setSpringDampingRatio
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_setSpringDampingRatio
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WheelJoint
 * Method:    getSpringDampingRatio
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WheelJoint_getSpringDampingRatio
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
