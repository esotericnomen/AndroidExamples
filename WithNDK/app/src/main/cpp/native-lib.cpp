#include <jni.h>
#include <string>
#include <android/log.h>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_rraj_withndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    __android_log_print(ANDROID_LOG_VERBOSE,"SHINGU","This print is from JNI");
    return env->NewStringUTF(hello.c_str());
}
