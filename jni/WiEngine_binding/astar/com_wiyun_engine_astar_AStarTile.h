/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_astar_AStarTile */

#ifndef _Included_com_wiyun_engine_astar_AStarTile
#define _Included_com_wiyun_engine_astar_AStarTile
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_astar_AStarTile_TILE_BLOCK
#define com_wiyun_engine_astar_AStarTile_TILE_BLOCK 1L
#undef com_wiyun_engine_astar_AStarTile_TILE_FREE
#define com_wiyun_engine_astar_AStarTile_TILE_FREE 0L
/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    nativeInit
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStarTile_nativeInit
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    getGRate
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_astar_AStarTile_getGRate
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    setGRate
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStarTile_setGRate
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    getX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStarTile_getX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    getY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStarTile_getY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    getType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStarTile_getType
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    setType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStarTile_setType
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    isBlocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_astar_AStarTile_isBlocked
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    isFree
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_astar_AStarTile_isFree
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    pushChild
 * Signature: (Lcom/wiyun/engine/astar/AStarTile;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStarTile_pushChild
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    getChildCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_astar_AStarTile_getChildCount
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_astar_AStarTile
 * Method:    nativeGetChildren
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_astar_AStarTile_nativeGetChildren
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
