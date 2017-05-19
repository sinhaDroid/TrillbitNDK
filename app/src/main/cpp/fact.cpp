#include <jni.h>

// Factorial Function
long factorial(int n)
{
    int counter;
    long fact = 1;

    //for Loop Block
    for (counter= 1; counter <= n; counter++)
    {
        fact = fact * counter;
    }

    return fact;
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_sinhadroid_trillbitndk_MainActivity_factorial(JNIEnv *env, jobject instance, jint n) {

    // TODO
    return factorial(n);
}

