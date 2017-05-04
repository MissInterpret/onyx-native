#include <iostream>
using namespace std;

#include <jni.h>
#include "org_onyxplatform_api_java_instance_NativeOnyxFn.h"
#include "OnyxNative.h"

// Class encapsulating the runtime back pointer, affordances
// for accessing utilities that live in Java-land.
//

	// Constructor ----------------------------------
	//

OnyxNative::OnyxNative (JNIEnv *env, jclass clazz) {

	m_env = env;

	// Hold on to the class as a global
	// reference for use with class-specific
	// caching classloader
	//
	m_instClass = (jclass) env->NewGlobalRef(clazz);

	// TODO: What is the prototype to return a class again?
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

jobject OnyxNative::getArgs() {
	// TODO: Pull the IPersistentMap jobject from the runtime
	//       
	return NULL;
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
jmethodID OnyxNative::getMethod(std::string clazz, std::string name, std::string decl) {

	// TODO: Use the runtime to generate a handle to an instance method
	return NULL;
}

	// IPersistentMap utilities ---------------------
	//



	// JNI Entry point, Bootstrapping ---------------
	// 


jobject OnyxNative::init (jobject mapObj) {
	// Assoc in a success value
	return mapObj;
}

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

JNIEXPORT JNIEnv* getJNIEnv() {
	if (g_onyx != NULL) {
		return g_onyx->getEnv();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass getClass(const char* pFqClassName) {
	if (g_onyx != NULL) {
		std::string className = pFqClassName;
		return g_onyx->getClass(className);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass getCurrentClass() {
	if (g_onyx != NULL) {
		return g_onyx->getCurrentClass();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject getInitArgs() {
	if (g_onyx != NULL) {
		return g_onyx->getArgs();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

/**
 * NOTE: jmethodID's have full runtime scope and can be re-used.
 */
JNIEXPORT jmethodID getMethod(const char* clazz, const char* name, const char* decl) {
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

