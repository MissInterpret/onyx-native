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
}


	// Accessors for runtime -----------------------
	// 

JNIEnv* OnyxNative::getEnv () {
	return m_env;
}

jclass OnyxNative::getClass() {
	// TODO: Get a class instance from the custom class loader
	return NULL;
}

jobject OnyxNative::getInitArgs() {
	// TODO: Pull the IPersistentMap jobject from the runtime
	//       
	return NULL;
}

jmethod OnyxNative::getMethod(std::string clazz, std::string method) {
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
	return g_onyx.init(mapObj);
}


// C-Externed entry points for access to runtime and utils --------
//

JNIEXPORT JNIEnv* getJNIEnv() {
	if (g_onxy != NULL) {
		return g_onyx->getEnv();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jclass getCurrentClass() {
	if (g_onxy != NULL) {
		return g_onyx->getClass();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jobject getInitArgs() {
	if (g_onxy != NULL) {
		return g_onyx->getArgs();
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

JNIEXPORT jmethod getMethod(std::string clazz, std::string method) {
	if (g_onxy != NULL) {
		return g_onyx->getMethod(clazz, method);
	} else {
		// NOTE: This is in case of severe lib load failure
		return NULL;
	}
}

