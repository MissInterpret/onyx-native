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
		jstring toJavaString(std::string s);


		// MapFns -----------------------
		//

		jobject emptyMap();
		jobject merge(jobject a, jobject b);

			// Get
		jobject 	getObj(jobject ipmap, std::string key);
		int 		getInt(jobject ipmap, std::string key);
		long 		getLong(jobject ipmap, std::string key);
		float 		getFloat(jobject ipmap, std::string key);
		double 		getDouble(jobject ipmap, std::string key);
		bool 		getBool(jobject ipmap, std::string key);
		std::string 	getStr(jobject ipmap, std::string key);

			// Assoc
		jobject assocObj(jobject ipmap, std::string key, jobject value);
		jobject assocInt(jobject ipmap, std::string key, int value);
		jobject assocLong(jobject ipmap, std::string key, long value);
		jobject assocFloat(jobject ipmap, std::string key, float value);
		jobject assocDouble(jobject ipmap, std::string key, double value);
		jobject assocBool(jobject ipmap, std::string key, bool value);
		jobject assocStr(jobject ipmap, std::string key, std::string value);

			// Dissoc
		jobject dissoc(jobject ipmap, std::string key);

	private: 
		JNIEnv* m_env;
		jclass m_instClass;

		// Utility class methods
		jmethodID m_findClassId;
		jmethodID m_mapEmptyId;
		jmethodID m_mapMergeId;
		jmethodID m_mapGetId;
		jmethodID m_mapAssocId;
		jmethodID m_mapDissocId;
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

JNIEXPORT jobject 	onyx_emptyMap();
JNIEXPORT jobject 	onyx_merge(jobject a, jobject b);

// Get ---------------	
JNIEXPORT jobject 	onyx_getObj(jobject ipmap, const char* key);
JNIEXPORT int 		onyx_getInt(jobject ipmap, const char* key);
JNIEXPORT long 		onyx_getLong(jobject ipmap, const char* key);
JNIEXPORT float 	onyx_getFloat(jobject ipmap, const char* key);
JNIEXPORT double 	onyx_getDouble(jobject ipmap, const char* key);
JNIEXPORT bool 		onyx_getBool(jobject ipmap, const char* key);
JNIEXPORT const char* 	onyx_getStr(jobject ipmap, const char* key);

// Assoc
JNIEXPORT jobject 	onyx_assocObj(jobject ipmap, const char* key, jobject value);
JNIEXPORT jobject 	onyx_assocInt(jobject ipmap, const char* key, int value);
JNIEXPORT jobject 	onyx_assocLong(jobject ipmap, const char* key, long value);
JNIEXPORT jobject 	onyx_assocFloat(jobject ipmap, const char* key, float value);
JNIEXPORT jobject 	onyx_assocDouble(jobject ipmap, const char* key, double value);
JNIEXPORT jobject 	onyx_assocBool(jobject ipmap, const char* key, bool value);
JNIEXPORT jobject 	onyx_assocStr(jobject ipmap, const char* key, std::string value);

// Dissoc
JNIEXPORT jobject 	onyx_dissoc(jobject ipmap, const char*);

}

