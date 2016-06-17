package com.github.mzule.ndkdemo;

/**
 * Created by CaoDongping on 6/17/16.
 */
public class Codec {

    static {
        System.loadLibrary("ndk-demo-jni");
    }

    public static native String encode(String src);
}
