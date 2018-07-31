package com.example.hellojni;

public class JniUtil {

    public JniUtil() {

    }

    //该方法为java调用c/c++的接口
    public static native String hello();

    static {
        System.loadLibrary("helloJNI");//注意这个名字是我们在build.gradle中ndk中配置的moduleName
    }
}