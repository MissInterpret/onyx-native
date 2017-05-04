#include <iostream>
using namespace std;

#include <jni.h>

class OnyxNative {

	public: 
		OnyxNative(JNIEnv *env, jclass clazz);
		~OnyxNative();

		jobject init(jobject mapObj);

		// Classloading utilities --------
		//

		JNIEnv* getEnv();
		jclass  getCurrentClass();
		jclass  getClass(std::string className);

		/**
 		* NOTE: jmethodID's have full runtime scope and can be re-used.
 		*/
		jmethodID getMethod(std::string clazz, std::string name, std::string decl);


		// MapFns -----------------------
		//
		jobject 	getObj(jobject ipmap, std::string key);
		int 		getInt(jobject ipmap, std::string key);
		float 		getFloat(jobject ipmap, std::string key);
		double 		getDouble(jobject ipmap, std::string key);
		bool 		getBool(jobject ipmap, std::string key);
		std::string 	getStr(jobject ipmap, std::string key);


		jobject assoc(jobject ipmap, std::string key, jobject value);
		jobject dissoc(jobject ipmap, std::string key, jobject value);
		jobject merge(jobject a, jobject b);

		jobject getIn(jobject ipmap, std::string key, ...);
		jobject assocIn(jobject ipmap, jobject value, std::string keys, ...);

	private: 
		JNIEnv* m_env;
		jclass m_instClass;
		jmethodID m_findClassId;
};

extern "C" {

OnyxNative *g_onyx;

// Runtime accessors 
//

JNIEXPORT JNIEnv* onyx_getJNIEnv();
JNIEXPORT jclass  onyx_getClass(const char* pFqClassName);
JNIEXPORT jclass  onyx_getCurrentClass();

/**
* NOTE: jmethodID's have full runtime scope and can be re-used.
*/
JNIEXPORT jmethodID onyx_getMethod(const char* clazz, const char* name, const char* decl);

// MapFns -----------------------------------------------------
//
	// Get ---------------	
	//
JNIEXPORT jobject 	onyx_getObj(jobject ipmap, const char* key);
JNIEXPORT int 		onyx_getInt(jobject ipmap, const char* key);
JNIEXPORT float 	onyx_getFloat(jobject ipmap, const char* key);
JNIEXPORT double 	onyx_getDouble(jobject ipmap, const char* key);
JNIEXPORT bool 		onyx_getBool(jobject ipmap, const char* key);
JNIEXPORT const char* 	onyx_getStr(jobject ipmap, const char* key);

}

