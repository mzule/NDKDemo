#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_github_mzule_ndkdemo_MainActivity_compress(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "hello");
}

JNIEXPORT jstring JNICALL
Java_com_github_mzule_ndkdemo_MainActivity_md5(JNIEnv *env, jobject instance, jstring src_) {
    const char *src = (*env)->GetStringUTFChars(env, src_, 0);
    (*env)->ReleaseStringUTFChars(env, src_, src);

    return (*env)->NewStringUTF(env, "somemd5value");
}

JNIEXPORT jstring JNICALL
Java_com_github_mzule_ndkdemo_Codec_encode(JNIEnv *env, jclass type, jstring src_) {
    const char *src = (*env)->GetStringUTFChars(env, src_, 0);
    (*env)->ReleaseStringUTFChars(env, src_, src);

    return (*env)->NewStringUTF(env, "from codec");
}

