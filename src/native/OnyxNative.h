#include <iostream>
using namespace std;

#include <jni.h>

class OnyxNative {

	public: 
		OnyxNative(JNIEnv *env, jclass clazz);
		~OnyxNative();

		jobject init(jobject mapObj);

		JNIEnv* getEnv();
		jclass  getCurrentClass();
		jclass  getClass(std::string className);

		/**
 		* NOTE: jmethodID's have full runtime scope and can be re-used.
 		*/
		jmethodID getMethod(std::string clazz, std::string name, std::string decl);


	private: 
		JNIEnv* m_env;
		jclass m_instClass;
		jmethodID m_findClassId;
};

extern "C" {

OnyxNative *g_onyx;

// Runtime accessors 
//

JNIEXPORT JNIEnv* getJNIEnv();
JNIEXPORT jclass  getClass(const char* pFqClassName);
JNIEXPORT jclass  getCurrentClass();

/**
* NOTE: jmethodID's have full runtime scope and can be re-used.
*/
JNIEXPORT jmethodID getMethod(const char* clazz, const char* name, const char* decl);

// Utilities 

}

