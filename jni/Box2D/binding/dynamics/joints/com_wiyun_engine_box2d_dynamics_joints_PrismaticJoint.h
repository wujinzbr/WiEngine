/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
#define _Included_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_INACTIVE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_INACTIVE 0L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_AT_LOWER
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_AT_LOWER 1L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_AT_UPPER
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_AT_UPPER 2L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_EQUAL
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_LIMIT_STATE_EQUAL 3L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    nativeGetLocalAxisA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_nativeGetLocalAxisA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getReferenceAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getReferenceAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    isMotorEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_isMotorEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    enableMotor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_enableMotor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getJointTranslation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getJointTranslation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getJointSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getJointSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    isLimitEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_isLimitEnabled
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    enableLimit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_enableLimit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getLowerLimit
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getLowerLimit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getUpperLimit
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getUpperLimit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    setLimits
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_setLimits
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    setMotorSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_setMotorSpeed
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getMotorSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getMotorSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    setMaxMotorForce
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_setMaxMotorForce
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getMaxMotorForce
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getMaxMotorForce
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint
 * Method:    getMotorForce
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJoint_getMotorForce
  (JNIEnv *, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
