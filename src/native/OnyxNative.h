#include <iostream>
using namespace std;

#include <jni.h>

// Open Questions
//
//   o What is the lifetime scope of things brought 
//     back from a JNI method request?
//
//   	- Double-check that the scope of JNI calls is 
//   	  until a function returns back to the JVM
//   	  (i.e. intermediate VM objs live until 
//   	        exiting the enclosing scope)
//
//   o Double-check that JNIEXPORT is the right preprocessing directive 
//     for c-decl
//     

class OnyxNative {

	public: 
		OnyxNative(JNIEnv *env, jclass clazz);

		jobject init(jobject mapObj);

		JNIEnv* getEnv();
		jclass  getClass();
		jobject getArgs();
		jmethodID getMethod(std::string clazz, std::string method);


	private: 
		JNIEnv* m_env;
};

extern "C" {

OnyxNative *g_onyx;

// Runtime accessors 
//

JNIEXPORT JNIEnv* getJNIEnv();
JNIEXPORT jclass  getCurrentClass();
JNIEXPORT jobject getInitArgs();
JNIEXPORT jmethodID getMethod(std::string clazz, std::string method);

// Utilities 

}

