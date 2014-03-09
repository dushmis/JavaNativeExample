#include "NativeExample.h"
#include <iostream>

using namespace std;

JNIEXPORT void JNICALL Java_NativeExample_callMe
(JNIEnv *env, jobject jobj){
  std::cout<<"Hello .."<<std::endl;
}

JNIEXPORT void JNICALL Java_NativeExample_printf
(JNIEnv *env, jobject job, jstring jstring){
  const char *nativeString = env->GetStringUTFChars(jstring,0);
  std::cout<<nativeString<<std::endl;
  env->ReleaseStringUTFChars(jstring, nativeString);
}
