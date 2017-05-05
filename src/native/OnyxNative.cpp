#include <iostream>
using namespace std;

#include <jni.h>
#include "org_onyxplatform_api_java_instance_NativeOnyxFn.h"
#include "OnyxNative.h"

/** Class encapsulating the runtime back pointer, affordances
 * for accessing utilities that live in Java-land.
 */

// Cnstr/Destr ----------------------------------
//

OnyxNative::OnyxNative (JNIEnv *env, jclass clazz) {

	m_env = env;

	// Hold on to the class as a global
	// reference for use with class-specific
	// caching classloader
	//
	m_instClass = (jclass) env->NewGlobalRef(clazz);
	m_findClassId = env->GetStaticMethodID(m_instClass, "findClass", "(Ljava/lang/Class;)Ljava/lang/String;");
}

OnyxNative::~OnyxNative () {
	m_env->DeleteGlobalRef(m_instClass);
}


// Accessors for runtime -----------------------
// 

JNIEnv* OnyxNative::getEnv () {
	return m_env;
}

jclass OnyxNative::getCurrentClass() {
	return m_instClass;
}

jclass OnyxNative::getClass(std::string className) {

	// Use our instance's classloader affordances.
	// This ensures that whatever classes are 
	// loaded as dependencies during runtime 
	// can be unloaded once the backing instance
	// is released.

	return (jclass) m_env->CallStaticObjectMethod(m_instClass, m_findClassId, className.c_str());
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
jmethodID OnyxNative::getMethod(std::string clazz, std::string name, std::string decl) {
	jclass c = getClass(clazz);
	return m_env->GetMethodID(c, name.c_str(), decl.c_str());
}

// JNI Entry point, Bootstrapping -------------------------------------
// 

jobject OnyxNative::init (jobject mapObj) {
	// Assoc in a success value
	return mapObj;
}


// IPersistentMap utilities -------------------------------------------
//

jobject OnyxNative::emptyMap() {
	return NULL;
}

jobject OnyxNative::merge(jobject a, jobject b) {
	return NULL;
}


	// Get -------------------------
	// 	
	
jobject OnyxNative::getObj(jobject ipmap, std::string key) {
	return NULL;
}

int OnyxNative::getInt(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	int i = 1;
	return i;
}

float OnyxNative::getFloat(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	float f = 1.0f;
	return f;
}

double OnyxNative::getDouble(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	double d = 2.0;
	return d;
}

bool OnyxNative::getBool(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	bool b = false;
	return b;
}

std::string OnyxNative::getStr(jobject ipmap, std::string key){
	jobject v = getObj(ipmap, key);
	std::string str = "";
	return str;
}


	// Assoc ------------------------
	//
jobject OnyxNative::assocObj(jobject ipmap, std::string key, jobject value) {
	return NULL;
}

jobject OnyxNative::assocInt(jobject ipmap, std::string key, int value) {
	return NULL;
}

jobject OnyxNative::assocFloat(jobject ipmap, std::string key, float value) {
	return NULL;
}

jobject OnyxNative::assocDouble(jobject ipmap, std::string key, double value) {
	return NULL;
}

jobject OnyxNative::assocBool(jobject ipmap, std::string key, bool value) {
	return NULL;
}

jobject OnyxNative::assocStr(jobject ipmap, std::string key, std::string value) {
	return NULL;
}

	// Dissoc ------------------------
	//
jobject OnyxNative::dissoc(jobject ipmap, std::string key) {
	return NULL;
}


// JNI Entry points for NativeOnyxFn --------------------------------
//

/*
 * Class:     org_onyxplatform_api_java_instance_OnyxNative
 * Method:    initNative
 * Signature: (Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_org_onyxplatform_api_java_instance_NativeOnyxFn_initNative
  (JNIEnv *env, jclass clazz, jobject mapObj) 
{
	g_onyx = new OnyxNative(env, clazz);
	return g_onyx->init(mapObj);
}



// C-Externed entry points for access to runtime and utils --------
//

JNIEXPORT JNIEnv* onyx_getJNIEnv() {
	if (g_onyx != NULL) {
		return g_onyx->getEnv();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass onyx_getCurrentClass() {
	if (g_onyx != NULL) {
		return g_onyx->getCurrentClass();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass onyx_getClass(const char* pFqClassName) {
	if (g_onyx != NULL) {
		std::string className = pFqClassName;
		return g_onyx->getClass(className);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
JNIEXPORT jmethodID onyx_getMethod(const char* clazz, const char* name, const char* decl) {
	if (g_onyx != NULL) {
		std::string cl = clazz;
		std::string n = name;
		std::string d = decl;
		return g_onyx->getMethod(cl, n, d);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

// MapFns -------------------------------------------------
//

	// Get ----------------------
	//

JNIEXPORT jobject onyx_getObj(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getObj(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT int onyx_getInt(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getInt(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1;
	}
}
JNIEXPORT float onyx_getFloat(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getFloat(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1.0f;
	}
}

JNIEXPORT double onyx_getDouble(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getDouble(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1;
	}
}

JNIEXPORT bool 	onyx_getBool(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getBool(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return false;
	}
}

JNIEXPORT const char* onyx_getStr(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return (g_onyx->getStr(ipmap, k)).c_str();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

	// Assoc ---------------------------------
	//

JNIEXPORT jobject 	onyx_assocObj(jobject ipmap, const char* key, jobject value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocObj(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject onyx_assocInt(jobject ipmap, const char* key, int value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocInt(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	onyx_assocFloat(jobject ipmap, const char* key, float value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocFloat(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	onyx_assocDouble(jobject ipmap, const char* key, double value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocDouble(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	onyx_assocBool(jobject ipmap, const char* key, bool value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocBool(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	onyx_assocStr(jobject ipmap, const char* key, const char* value) {
	if (g_onyx != NULL) {
		std::string k = key;
		std::string v = value;
		return g_onyx->assocStr(ipmap, k, v);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

	// Dissoc ---------------------------------
	//

JNIEXPORT jobject 	onyx_dissoc(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->dissoc(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

