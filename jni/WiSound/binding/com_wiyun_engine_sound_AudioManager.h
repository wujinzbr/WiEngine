/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_sound_AudioManager */

#ifndef _Included_com_wiyun_engine_sound_AudioManager
#define _Included_com_wiyun_engine_sound_AudioManager
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_sound_AudioManager_FORMAT_MP3
#define com_wiyun_engine_sound_AudioManager_FORMAT_MP3 1L
#undef com_wiyun_engine_sound_AudioManager_FORMAT_WAV
#define com_wiyun_engine_sound_AudioManager_FORMAT_WAV 2L
#undef com_wiyun_engine_sound_AudioManager_FORMAT_OGG
#define com_wiyun_engine_sound_AudioManager_FORMAT_OGG 3L
/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadBackgroundMusic
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadBackgroundMusic__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadBackgroundMusic
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadBackgroundMusic__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadBackgroundMusic
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadBackgroundMusic__Ljava_lang_String_2Z
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playBackgroundMusic
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playBackgroundMusic__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playBackgroundMusic
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playBackgroundMusic__III
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playBackgroundMusic
 * Signature: (Ljava/lang/String;ZI)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playBackgroundMusic__Ljava_lang_String_2ZI
  (JNIEnv *, jclass, jstring, jboolean, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    stopBackgroundMusic
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_stopBackgroundMusic
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    isBackgroundMusicPaused
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_sound_AudioManager_isBackgroundMusicPaused
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    pauseBackgroundMusic
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_pauseBackgroundMusic
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    resumeBackgroundMusic
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_resumeBackgroundMusic
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    isBackgroundPlaying
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_sound_AudioManager_isBackgroundPlaying
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    removeAllEffects
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_removeAllEffects
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    removeEffect
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_removeEffect__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    removeEffect
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_removeEffect__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playEffect
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playEffect__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playEffect
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playEffect__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    playEffect
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_playEffect__Ljava_lang_String_2Z
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    stopEffect
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_stopEffect__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    stopEffect
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_stopEffect__Ljava_lang_String_2Z
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadEffect
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadEffect__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadEffect
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadEffect__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    preloadEffect
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_preloadEffect__Ljava_lang_String_2Z
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    setEffectVolume
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_setEffectVolume
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    setBackgroundVolume
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_setBackgroundVolume
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    onPeriodicNotification
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_onPeriodicNotification
  (JNIEnv *, jclass);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    setMute
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_sound_AudioManager_setMute
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_wiyun_engine_sound_AudioManager
 * Method:    isMuted
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_sound_AudioManager_isMuted
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
