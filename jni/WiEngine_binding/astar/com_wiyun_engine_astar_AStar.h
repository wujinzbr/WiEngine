/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_astar_AStar */

#ifndef _Included_com_wiyun_engine_astar_AStar
#define _Included_com_wiyun_engine_astar_AStar
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_astar_AStar
 * Method:    nativeInit
 * Signature: (Lcom/wiyun/engine/astar/AStarMap;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStar_nativeInit
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStar
 * Method:    nativeFindPath
 * Signature: (IIIIZ)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStar_nativeFindPath
  (JNIEnv *, jobject, jint, jint, jint, jint, jboolean);

/*
 * Class:     com_wiyun_engine_astar_AStar
 * Method:    nativeGetStep
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStar_nativeGetStep
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     com_wiyun_engine_astar_AStar
 * Method:    nativeGetStarMap
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStar_nativeGetStarMap
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStar
 * Method:    nativeHeuristic
 * Signature: (IIII)F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_astar_AStar_nativeHeuristic
  (JNIEnv *, jobject, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
