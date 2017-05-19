
#ifndef _Included_OnyxNative
#define _Included_OnyxNative

#include <jni.h>
#include <stdbool.h>

#ifdef __cplusplus

#include <iostream>
#include <string>
using namespace std;

class OnyxNative {

	public: 
		OnyxNative(JNIEnv *env, jobject obj);
		~OnyxNative();

		jobject init(jobject mapObj);


		// JNI --------------------------
		//

		JNIEnv* getEnv();

		/**
		 * The instance bound to this library
		 */
		jobject  getInstance();

		/**
		 * NOTE: All JNI objects are scoped to its calling context.
		 */
		jclass  getClass(std::string className);

		/**
 		* NOTE: jmethodID's have full runtime scope and can be re-used.
 		*/
		jmethodID getMethod(jclass clazz, std::string name, std::string decl, bool isStatic);


		// MapFns -----------------------
		//

		jobject emptyMap();
		jobject merge(jobject a, jobject b);

			// Get
		jobject 	getObj(jobject ipmap, std::string key);
		int 		getInt(jobject ipmap, std::string key);
		long 		getLong(jobject ipmap, std::string key);
		float 		getFloat(jobject ipmap, std::string key);

		/**
		 * NOTE: This does NOT preserve precision. 
		 *       adding 2.2 to the map, for example will 
		 *       return a value of 2.200000047683716
		 */
		double 		getDouble(jobject ipmap, std::string key);
		bool 		getBool(jobject ipmap, std::string key);
		jstring 	getStr(jobject ipmap, std::string key);

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


		// Utils -------------------------
		//
		
		void checkAndThrow(std::string msg);

		jstring toJavaString(std::string s);


	private: 
		JNIEnv* m_env;
		jobject m_instObj;

		// Map utilities
		jclass    m_mapClass;
		jmethodID m_mapEmptyId;
		jmethodID m_mapMergeId;
		jmethodID m_mapGetId;
		jmethodID m_mapAssocId;
		jmethodID m_mapDissocId;
};

extern "C" {

OnyxNative *g_onyx;

#endif

// Runtime accessors 
//

JNIEXPORT JNIEnv* JNICALL onyx_getJNIEnv();
JNIEXPORT jclass  JNICALL onyx_getClass(const char* pFqClassName);
JNIEXPORT jobject JNICALL onyx_getInstance();

/**
* NOTE: jmethodID's have full runtime scope and can be re-used.
*/
JNIEXPORT jmethodID JNICALL onyx_getMethod(const char* clazz, const char* name, const char* decl, bool isStatic);

JNIEXPORT jstring JNICALL onyx_toJavaString(const char* s);


// MapFns -----------------------------------------------------
//

JNIEXPORT jobject 	JNICALL onyx_emptyMap();
JNIEXPORT jobject 	JNICALL onyx_merge(jobject a, jobject b);
JNIEXPORT jobject 	JNICALL onyx_dissoc(jobject ipmap, const char* key);

// Get ---------------	

/**
* NOTE: This does NOT preserve precision. 
*       adding 2.2 to the map, for example will 
*       return a value of 2.200000047683716
*/
JNIEXPORT double 	JNICALL onyx_getDouble(jobject ipmap, const char* key);

JNIEXPORT jobject 	JNICALL onyx_getObj(jobject ipmap, const char* key);
JNIEXPORT int 		JNICALL onyx_getInt(jobject ipmap, const char* key);
JNIEXPORT long 		JNICALL onyx_getLong(jobject ipmap, const char* key);
JNIEXPORT float 	JNICALL onyx_getFloat(jobject ipmap, const char* key);
JNIEXPORT bool 		JNICALL onyx_getBool(jobject ipmap, const char* key);
JNIEXPORT jstring 	JNICALL onyx_getStr(jobject ipmap, const char* key);


// Assoc

/**
* NOTE: This does NOT preserve precision. 
*       adding 2.2 to the map, for example will 
*       return a value of 2.200000047683716
*/
JNIEXPORT jobject 	JNICALL onyx_assocDouble(jobject ipmap, const char* key, double value);

JNIEXPORT jobject 	JNICALL onyx_assocObj(jobject ipmap, const char* key, jobject value);
JNIEXPORT jobject 	JNICALL onyx_assocInt(jobject ipmap, const char* key, int value);
JNIEXPORT jobject 	JNICALL onyx_assocLong(jobject ipmap, const char* key, long value);
JNIEXPORT jobject 	JNICALL onyx_assocFloat(jobject ipmap, const char* key, float value);
JNIEXPORT jobject 	JNICALL onyx_assocBool(jobject ipmap, const char* key, bool value);
JNIEXPORT jobject 	JNICALL onyx_assocStr(jobject ipmap, const char* key, const char* value);

#ifdef __cplusplus
}
#endif

#endif
