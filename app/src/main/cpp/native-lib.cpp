#include <jni.h>

extern "C"
JNIEXPORT jlong JNICALL
Java_com_vikas_android_trillbitndk_MainActivity_factFromJNI(JNIEnv *env, jlong no) {
    int counter;
    long fact = 1;
    //for Loop Block
    for (int counter = 1; counter <= no; counter++) {
        fact = fact * counter;
    }
    return fact;
}
