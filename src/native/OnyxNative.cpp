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
	m_findClassId = env->GetStaticMethodID(m_instClass, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
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
	// 
	return (jclass) m_env->CallStaticObjectMethod(m_instClass, m_findClassId, className.c_str());
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
jmethodID OnyxNative::getMethod(std::string clazz, std::string name, std::string decl) {
	jclass c = getClass(clazz);
	return m_env->GetMethodID(c, name.c_str(), decl.c_str());
}

jstring OnyxNative::toJavaString(std::string s) {
	return 	m_env->NewStringUTF(s.c_str());
}


// JNI Entry point, Bootstrapping -------------------------------------
// 

jobject OnyxNative::init (jobject mapObj) {

	m_mapEmptyId = getMethod("org/onyxplatform/api/java/utils/MapFns", "emptyMap", "()Lclojure/lang/IPersistentMap;");

	m_mapMergeId = getMethod("org/onyxplatform/api/java/utils/MapFns", "merge", "(Lclojure/lang/IPersistentMap;Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;");

	m_mapGetId = getMethod("org/onyxplatform/api/java/utils/MapFns", "get", "(Lclojure/lang/IPersistentMap;Lclojure/lang/IPersistentMap)Lclojure/lang/IPersistentMap;");

	m_mapAssocId = getMethod("org/onyxplatform/api/java/utils/MapFns", "assoc", "(Lclojure/lang/IPersistentMap;Ljava/lang/String;Ljava/lang/Object;)Lclojure/lang/IPersistentMap;");

	m_mapDissocId = getMethod("org/onyxplatform/api/java/utils/MapFns", "dissoc", "(Lclojure/lang/IPersistentMap;Ljava/lang/String;)Lclojure/lang/IPersistentMap;");

	// Assoc in a success value?
	return mapObj;
}


// IPersistentMap utilities -------------------------------------------
//

jobject OnyxNative::emptyMap() {
	jclass mapClass = getClass("org/onyxplatform/api/java/utils/MapFns");
	return m_env->CallStaticObjectMethod(mapClass, m_mapEmptyId);
}

jobject OnyxNative::merge(jobject a, jobject b) {
	jclass mapClass = getClass("org/onyxplatform/api/java/utils/MapFns");
	return m_env->CallStaticObjectMethod(mapClass, m_mapMergeId, a, b);
}


	// Get -------------------------
	// 	
	
jobject OnyxNative::getObj(jobject ipmap, std::string key) {
	jclass mapClass = getClass("org/onyxplatform/api/java/utils/MapFns");
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(mapClass, m_mapGetId, ipmap, keyStr); 
}

int OnyxNative::getInt(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/Integer");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		jmethodID mid   = m_env->GetMethodID(clazz, "intValue", "()I");
		return (int) m_env->CallIntMethod(v, mid);
	}
	else {
		return -1;
	}
}

long OnyxNative::getLong(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/Long");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		jmethodID mid   = m_env->GetMethodID(clazz, "longValue", "()J");
		return (long) m_env->CallLongMethod(v, mid);
	}
	else {
		return -1;
	}
}

float OnyxNative::getFloat(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/Float");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		jmethodID mid   = m_env->GetMethodID(clazz, "floatValue", "()F");
		return (float) m_env->CallFloatMethod(v, mid);
	}
	else {
		return -1.0f;
	}
}

double OnyxNative::getDouble(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/Double");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		jmethodID mid   = m_env->GetMethodID(clazz, "doubleValue", "()D");
		return (float) m_env->CallDoubleMethod(v, mid);
	}
	else {
		return -1.0f;
	}
}

bool OnyxNative::getBool(jobject ipmap, std::string key) {
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/Boolean");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		jmethodID mid   = m_env->GetMethodID(clazz, "booleanValue", "()Z");
		return (bool) m_env->CallBooleanMethod(v, mid);
	}
	else {
		return false;
	}
}

std::string OnyxNative::getStr(jobject ipmap, std::string key){
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/String");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		// Pull the UTF string
		return "";
	}
	else {
		return "ERROR";
	}
}


	// Assoc ------------------------
	//
jobject OnyxNative::assocObj(jobject ipmap, std::string key, jobject value) {
	jclass mapClass = getClass("org.onyxplatform.api.java.utils.MapFns");
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(mapClass, m_mapAssocId, ipmap, keyStr, value);
}

jobject OnyxNative::assocInt(jobject ipmap, std::string key, int value) {
	jclass clazz = getClass("java/lang/Integer");
	jmethodID mid =  m_env->GetMethodID(clazz, "<init>", "(I)V");
	jobject obj = m_env->NewObject(clazz, mid, (jint) value);
	return assocObj(ipmap, key, obj);
}

jobject OnyxNative::assocLong(jobject ipmap, std::string key, long value) {
	jclass clazz = getClass("java/lang/Long");
	jmethodID init =  m_env->GetMethodID(clazz, "<init>", "(J)V");
	jobject obj = m_env->NewObject(clazz, init, (jlong) value);
	return assocObj(ipmap, key, obj);
}

jobject OnyxNative::assocFloat(jobject ipmap, std::string key, float value) {
	jclass clazz = getClass("java/lang/Float");
	jmethodID init =  m_env->GetMethodID(clazz, "<init>", "(F)V");
	jobject obj = m_env->NewObject(clazz, init, (jfloat) value);
	return assocObj(ipmap, key, obj);
}

jobject OnyxNative::assocDouble(jobject ipmap, std::string key, double value) {
	jclass clazz = getClass("java/lang/Double");
	jmethodID init =  m_env->GetMethodID(clazz, "<init>", "(D)V");
	jobject obj = m_env->NewObject(clazz, init, (jdouble) value);
	return assocObj(ipmap, key, obj);
}

jobject OnyxNative::assocBool(jobject ipmap, std::string key, bool value) {
	jclass clazz = getClass("java/lang/Boolean");
	jmethodID init =  m_env->GetMethodID(clazz, "<init>", "(Z)V");
	jobject obj = m_env->NewObject(clazz, init, (jboolean) value);
	return assocObj(ipmap, key, obj);
}

jobject OnyxNative::assocStr(jobject ipmap, std::string key, std::string value) {
	return assocObj(ipmap, key, toJavaString(value));
}

	// Dissoc ------------------------
	//
jobject OnyxNative::dissoc(jobject ipmap, std::string key) {
	jclass mapClass = getClass("org.onyxplatform.api.java.utils.MapFns");
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(mapClass, m_mapDissocId, ipmap, keyStr);
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

/*
 * Class:     org_onyxplatform_api_java_instance_NativeOnyxFn
 * Method:    releaseNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_onyxplatform_api_java_instance_NativeOnyxFn_releaseNative
  (JNIEnv *env, jclass clazz) 
{
	delete g_onyx;
	g_onyx = NULL;
}



// C-Externed entry points for access to runtime and utils --------
//

JNIEXPORT JNIEnv* JNICALL onyx_getJNIEnv() {
	if (g_onyx != NULL) {
		return g_onyx->getEnv();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass JNICALL onyx_getCurrentClass() {
	if (g_onyx != NULL) {
		return g_onyx->getCurrentClass();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass JNICALL onyx_getClass(const char* pFqClassName) {
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
JNIEXPORT jmethodID JNICALL onyx_getMethod(const char* clazz, const char* name, const char* decl) {
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

JNIEXPORT jobject JNICALL onyx_getObj(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getObj(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT int JNICALL onyx_getInt(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getInt(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1;
	}
}

JNIEXPORT long JNICALL onyx_getLong(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getLong(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1;
	}
}

JNIEXPORT float JNICALL onyx_getFloat(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getFloat(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1.0f;
	}
}

JNIEXPORT double JNICALL onyx_getDouble(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getDouble(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return -1;
	}
}

JNIEXPORT bool 	JNICALL onyx_getBool(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getBool(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return false;
	}
}

JNIEXPORT const char* JNICALL onyx_getStr(jobject ipmap, const char* key) {
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

JNIEXPORT jobject 	JNICALL onyx_assocObj(jobject ipmap, const char* key, jobject value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocObj(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject JNICALL onyx_assocInt(jobject ipmap, const char* key, int value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocInt(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject JNICALL onyx_assocLong(jobject ipmap, const char* key, long value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocLong(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	JNICALL onyx_assocFloat(jobject ipmap, const char* key, float value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocFloat(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	JNICALL onyx_assocDouble(jobject ipmap, const char* key, double value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocDouble(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	JNICALL onyx_assocBool(jobject ipmap, const char* key, bool value) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->assocBool(ipmap, k, value);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject 	JNICALL onyx_assocStr(jobject ipmap, const char* key, const char* value) {
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

JNIEXPORT jobject 	JNICALL onyx_dissoc(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->dissoc(ipmap, k);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

