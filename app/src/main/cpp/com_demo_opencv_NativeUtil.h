/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_demo_opencv_NativeUtil */

#ifndef _Included_com_demo_opencv_NativeUtil
#define _Included_com_demo_opencv_NativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_demo_opencv_NativeUtil
 * Method:    computeDescripors
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_demo_opencv_NativeUtil_computeDescripors
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_demo_opencv_NativeUtil
 * Method:    detectFeatures
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_demo_opencv_NativeUtil_detectFeatures
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_demo_opencv_NativeUtil
 * Method:    transformToGray
 * Signature: ([III)[I
 */
JNIEXPORT jintArray JNICALL Java_com_demo_opencv_NativeUtil_transformToGray
  (JNIEnv *, jclass, jintArray, jint, jint);

/*
 * Class:     com_demo_opencv_NativeUtil
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_demo_opencv_NativeUtil_stringFromJNI
  (JNIEnv *, jclass);

/*
 * Class:     com_demo_opencv_NativeUtil
 * Method:    unimplementedStringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_demo_opencv_NativeUtil_unimplementedStringFromJNI
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif