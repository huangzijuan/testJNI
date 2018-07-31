#include "com_example_hellojni_JniUtil.h"
//这里引入我们刚才的.h头文件

JNIEXPORT jstring JNICALL Java_com_example_hellojni_JniUtil_hello
   (JNIEnv *env, jobject obj){
         return (*env)->NewStringUTF(env,"这里是来自c的string");
   }