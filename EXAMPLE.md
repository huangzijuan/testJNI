#include
 <jni.h>
#include
 <string>

extern "C"
jstring
Java_com_example_swr_hellojni_12_MainActivity_stringFromJNI(
JNIEnv* env,
jobject /* this */) {
std::string hello = "Hello from C++";
return env->NewStringUTF(hello.c_str());
}

简单分析：
首先include相应所需要的头文件，然后extern “C”表示它是一个C文件。
jstring是java中的String，然后是详细的函数名（包括了调用它的类名）。
JNIEnv是一个JNI结构，提供了一系列对C++的函数、数据转换到Java native的函数，而env是指向它的指针，jobject是传入这个native代码的java对象。
这两个传入的形参在Java代码中是没有的，是为了将C++代码进行转换才需要提供。
之后就是创建一个string类的对象hello保存了显示的字符串，然后用JNIEnv结构中的函数传到java中。