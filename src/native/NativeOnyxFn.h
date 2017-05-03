#include <iostream>
using namespace std;

#include <jni.h>

class NativeOnyxFn {

	public: 
		NativeOnyxFn(JNIEnv *env, jclass clazz);

		jobject init(jobject mapObj);

		JNIEnv* getEnv();
		jclass  getClass();
		jobject getArgs();


	private: 
		JNIEnv* m_env;
		jclass  m_class;
		jobject m_initObj;
};

extern "C" {

NativeOnyxFn *g_onxyFn;

// Runtime accessors 
//

JNIEXPORT JNIEnv* getJNIEnv();
JNIEXPORT jclass  getCurrentClass();
JNIEXPORT jobject getInitArgs();

// Utilities 



}

