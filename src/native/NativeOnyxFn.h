#include <iostream>
using namespace std;

#include <jni.h>

class NativeOnyxFn {

	public: 
		NativeOnyxFn(JNIEnv *env, jclass clazz);

		jobject init(jobject mapObj);

		JNIEnv* getEnv();
		jclass  getClass();
		jobject getInitArgs();


	private: 
		JNIEnv* m_env;
		jclass  m_class;
		jobject m_initObj;
};

extern "C" {

NativeOnyxFn *g_onxyFn;

// TODO: Add decl for all map utilities and 
//       other callback helpers so they 
//       can be cleanly called by C
//       





}

