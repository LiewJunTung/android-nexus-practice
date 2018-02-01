#include <jni.h>
#include <string>
#include "dog.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_netvirta_org_somenativelibrary_Kernel_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    animals::Dog *dog = new animals::Dog("JT", 3);

    std::string hello = dog->bark();
    return env->NewStringUTF(hello.c_str());
}
