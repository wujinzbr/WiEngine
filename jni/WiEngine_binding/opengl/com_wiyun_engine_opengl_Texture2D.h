/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_opengl_Texture2D */

#ifndef _Included_com_wiyun_engine_opengl_Texture2D
#define _Included_com_wiyun_engine_opengl_Texture2D
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_opengl_Texture2D_LEFT
#define com_wiyun_engine_opengl_Texture2D_LEFT 0L
#undef com_wiyun_engine_opengl_Texture2D_CENTER
#define com_wiyun_engine_opengl_Texture2D_CENTER 1L
#undef com_wiyun_engine_opengl_Texture2D_RIGHT
#define com_wiyun_engine_opengl_Texture2D_RIGHT 2L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_BMP
#define com_wiyun_engine_opengl_Texture2D_SOURCE_BMP 1L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_JPG
#define com_wiyun_engine_opengl_Texture2D_SOURCE_JPG 2L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_PNG
#define com_wiyun_engine_opengl_Texture2D_SOURCE_PNG 3L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_PVR
#define com_wiyun_engine_opengl_Texture2D_SOURCE_PVR 4L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_LABEL
#define com_wiyun_engine_opengl_Texture2D_SOURCE_LABEL 5L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_OPENGL
#define com_wiyun_engine_opengl_Texture2D_SOURCE_OPENGL 6L
#undef com_wiyun_engine_opengl_Texture2D_SOURCE_RAW
#define com_wiyun_engine_opengl_Texture2D_SOURCE_RAW 7L
/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (Lcom/wiyun/engine/utils/BitmapRawData;I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__Lcom_wiyun_engine_utils_BitmapRawData_2I
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__IIII
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (ILjava/lang/String;IIF)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__ILjava_lang_String_2IIF
  (JNIEnv *, jobject, jint, jstring, jint, jint, jfloat);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (Ljava/lang/String;FLjava/lang/String;ZFI)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__Ljava_lang_String_2FLjava_lang_String_2ZFI
  (JNIEnv *, jobject, jstring, jfloat, jstring, jboolean, jfloat, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNew
 * Signature: (Ljava/lang/String;FILjava/lang/String;FI)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNew__Ljava_lang_String_2FILjava_lang_String_2FI
  (JNIEnv *, jobject, jstring, jfloat, jint, jstring, jfloat, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeNewFile
 * Signature: (ILjava/lang/String;IIF)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeNewFile
  (JNIEnv *, jobject, jint, jstring, jint, jint, jfloat);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setAntiAlias
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setAntiAlias
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setRepeat
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setRepeat
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setTexParameters
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setTexParameters
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    applyTexParameters
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_applyTexParameters
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeDrawAtPoint
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeDrawAtPoint__FF
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeDrawAtPoint
 * Signature: (FFZZ)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeDrawAtPoint__FFZZ
  (JNIEnv *, jobject, jfloat, jfloat, jboolean, jboolean);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_Texture2D_getHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_Texture2D_getWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    loadTexture
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_loadTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getWidthScale
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_Texture2D_getWidthScale
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getHeightScale
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_opengl_Texture2D_getHeightScale
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getPixelHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_getPixelHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    getPixelWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_getPixelWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    isFlipX
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_opengl_Texture2D_isFlipX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setFlipX
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setFlipX
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    isFlipY
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_opengl_Texture2D_isFlipY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setFlipY
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setFlipY
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    updateRaw
 * Signature: (Lcom/wiyun/engine/utils/BitmapRawData;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_updateRaw
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    setColorFilter
 * Signature: (Lcom/wiyun/engine/filters/ColorFilter;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_setColorFilter
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    applyFilter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_applyFilter
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    nativeClone
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_opengl_Texture2D_nativeClone
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_opengl_Texture2D
 * Method:    switchToClone
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_opengl_Texture2D_switchToClone
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
