#include <iostream>
#include <string>
using namespace std;

#include <jni.h>
#include "org_onyxplatform_api_java_instance_NativeOnyxFn.h"
#include "OnyxNative.h"

/** Class encapsulating the runtime back pointer, affordances
 * for accessing utilities that live in Java-land.
 */

// Cnstr/Destr ----------------------------------
//

OnyxNative::OnyxNative (JNIEnv *env, jobject obj) {

	m_env = env;

	// Hold on to the object as a global
	// reference for use with callbacks
	//
	m_instObj = (jobject) env->NewGlobalRef(obj);

	jclass mc = env->FindClass("org/onyxplatform/api/java/utils/MapFns");
	m_mapClass = (jclass) env->NewGlobalRef(mc);

	std::string msg = "OnyxNative::OnyxNative> failed to find MapFns";
	checkAndThrow(msg);
}

OnyxNative::~OnyxNative () {
	m_env->DeleteGlobalRef(m_instObj);
	m_env->DeleteGlobalRef(m_mapClass);
	m_instObj = NULL;
	m_mapClass = NULL;
	m_env = NULL;
}

// Utils ---------------------------------------
//

void OnyxNative::checkAndThrow(std::string msg) {
	if (m_env->ExceptionCheck()) {
		cout << "OnyxNative::checkAndThrow> msg=" << msg << endl;
	   	jclass Exception = m_env->FindClass("java/lang/Exception");
	   	m_env->ThrowNew(Exception,msg.c_str());
	}
}

// Accessors for runtime -----------------------
// 

JNIEnv* OnyxNative::getEnv () {
	return m_env;
}

jobject OnyxNative::getInstance() {
	return m_instObj;
}

jclass OnyxNative::getClass(std::string className) {
	jclass reqc = m_env->FindClass(className.c_str());
	std::string msg = "getClass> failed (" + className + ")";
	checkAndThrow(msg);
	return reqc;
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
jmethodID OnyxNative::getMethod(jclass clazz, std::string name, std::string decl, bool isStatic) {
	jmethodID id = NULL;
	if (isStatic) {
		id =  m_env->GetStaticMethodID(clazz, name.c_str(), decl.c_str());
	}
	else {
		id =  m_env->GetMethodID(clazz, name.c_str(), decl.c_str());
	}

	std::string msg = "getMethod> failed (name=" + name + ") (decl=" + decl + ")";
	checkAndThrow(msg);
	return id;
}

jstring OnyxNative::toJavaString(std::string s) {
	return 	m_env->NewStringUTF(s.c_str());
}


// JNI Entry point, Bootstrapping -------------------------------------
// 

jobject OnyxNative::init (jobject mapObj) {
	
	m_mapEmptyId = getMethod(m_mapClass, "emptyMap", "()Lclojure/lang/IPersistentMap;", true);
	std::string msg = "OnyxNative::init> emptyMap failed )";
	checkAndThrow(msg);

	m_mapMergeId = getMethod(m_mapClass, "merge", "(Lclojure/lang/IPersistentMap;Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;", true);
	msg = "OnyxNative::init> merge failed )";
	checkAndThrow(msg);

	m_mapGetId = getMethod(m_mapClass, "get", "(Lclojure/lang/IPersistentMap;Ljava/lang/String;)Ljava/lang/Object;", true);
	msg = "OnyxNative::init> get failed )";
	checkAndThrow(msg);

	m_mapAssocId = getMethod(m_mapClass, "assoc", "(Lclojure/lang/IPersistentMap;Ljava/lang/String;Ljava/lang/Object;)Lclojure/lang/IPersistentMap;", true);
	msg = "OnyxNative::init> assoc failed )";
	checkAndThrow(msg);

	m_mapDissocId = getMethod(m_mapClass, "dissoc", "(Lclojure/lang/IPersistentMap;Ljava/lang/String;)Lclojure/lang/IPersistentMap;", true);
	msg = "OnyxNative::init> dissoc failed )";
	checkAndThrow(msg);

	// Assoc in a success value?
	
	return mapObj;
}


// IPersistentMap utilities -------------------------------------------
//

jobject OnyxNative::emptyMap() {
	return m_env->CallStaticObjectMethod(m_mapClass, m_mapEmptyId);
}

jobject OnyxNative::merge(jobject a, jobject b) {
	return m_env->CallStaticObjectMethod(m_mapClass, m_mapMergeId, a, b);
}


	// Get -------------------------
	// 	
	
jobject OnyxNative::getObj(jobject ipmap, std::string key) {
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(m_mapClass, m_mapGetId, ipmap, keyStr); 
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

jstring OnyxNative::getStr(jobject ipmap, std::string key){
	jobject v = getObj(ipmap, key);
	jclass clazz = getClass("java/lang/String");
	if (m_env->IsInstanceOf(v, clazz) == JNI_TRUE)
	{
		return (jstring)v;
	}
	else {
		return NULL;
	}
}


	// Assoc ------------------------
	//
jobject OnyxNative::assocObj(jobject ipmap, std::string key, jobject value) {
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(m_mapClass, m_mapAssocId, ipmap, keyStr, value);
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

jobject OnyxNative::assocKeyword(jobject ipmap, std::string key, std::string value) {
	//TODO: Add a keyword creation function to the MapFns
	return NULL;
}

	// Dissoc ------------------------
	//
jobject OnyxNative::dissoc(jobject ipmap, std::string key) {
	jstring keyStr = toJavaString(key);
	return m_env->CallStaticObjectMethod(m_mapClass, m_mapDissocId, ipmap, keyStr);
}


// JNI Entry points for NativeOnyxFn --------------------------------
//

/*
 * Class:     org_onyxplatform_api_java_instance_NativeOnyxFn
 * Method:    initNative
 * Signature: (Ljava/lang/Object;Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_org_onyxplatform_api_java_instance_NativeOnyxFn_initNative
  (JNIEnv *env, jclass, jobject instObj, jobject mapObj)
{
	g_onyx = new OnyxNative(env, instObj);
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

JNIEXPORT jobject JNICALL onyx_getInstance() {
	if (g_onyx != NULL) {
		return g_onyx->getInstance();
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
JNIEXPORT jmethodID JNICALL onyx_getMethod(const char* clazz, const char* name, const char* decl, bool isStatic) {
	if (g_onyx != NULL) {
		jclass cl = onyx_getClass(clazz);
		std::string n = name;
		std::string d = decl;
		return g_onyx->getMethod(cl, n, d, isStatic);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jstring JNICALL onyx_toJavaString(const char* s) {
	if (g_onyx != NULL) {
		std::string ss = s;
		return g_onyx->toJavaString(ss);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}


// MapFns -------------------------------------------------
//
		
JNIEXPORT jobject JNICALL onyx_emptyMap() {
	if (g_onyx != NULL) {
		return g_onyx->emptyMap();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}
		
JNIEXPORT jobject JNICALL onyx_merge(jobject a, jobject b) {
	if (g_onyx != NULL) {
		return g_onyx->merge(a, b);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

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

JNIEXPORT jstring JNICALL onyx_getStr(jobject ipmap, const char* key) {
	if (g_onyx != NULL) {
		std::string k = key;
		return g_onyx->getStr(ipmap, k);
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

JNIEXPORT jobject 	JNICALL onyx_assocKeyword(jobject ipmap, const char* key, const char* value) {
	if (g_onyx != NULL) {
		std::string k = key;
		std::string v = value;
		return g_onyx->assocKeyword(ipmap, k, v);
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

