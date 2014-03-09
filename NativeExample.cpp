#include "NativeExample.h"
#include <iostream>

using namespace std;


JNIEXPORT void JNICALL Java_NativeExample_callMe
(JNIEnv *env, jobject jobj){
  std::cout<<"Hello .."<<std::endl;
  jclass classObject = env->FindClass("Abc");
  if(classObject==0){
    std::cout<<"couldn't find class"<<std::endl;
  }else{
    std::cout<<"found class"<<std::endl;
  }

  // use javap -s Abc to find method signatures
  jmethodID constructor = env->GetMethodID(classObject,"<init>","()V");
  jobject object = env->NewObject(classObject, constructor);

  // use javap -s Abc to find method signatures
  jmethodID method1Object = env->GetMethodID(classObject,"method1","(I)V");
  if(method1Object==0){
    std::cout<<"coudn't find method"<<std::endl;
  }else{
    std::cout<<"found method"<<std::endl;
  }
  object = env->NewObject(classObject, method1Object,2);


}

JNIEXPORT void JNICALL Java_NativeExample_printf
(JNIEnv *env, jobject job, jstring jstring){
  const char *nativeString = env->GetStringUTFChars(jstring,0);
  std::cout<<nativeString<<std::endl;
  env->ReleaseStringUTFChars(jstring, nativeString);
}
