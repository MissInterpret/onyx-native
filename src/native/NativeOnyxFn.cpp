#include <iostream>
using namespace std;

#include <jni.h>
#include "org_onyxplatform_api_java_instance_NativeOnyxFn.h"
#include "NativeOnyxFn.h"

// Class encapsulating the runtime back pointer, affordances
// for accessing utilities that live in Java-land.
//

	// Constructor ----------------------------------
	//

NativeOnyxFn::NativeOnyxFn (JNIEnv *env, jclass clazz) {
	m_env = env;
	m_class = clazz;
}


	// Accessors for runtime -----------------------
	// 

JNIEnv* NativeOnyxFn::getEnv () {
	return m_env;
}

jclass NativeOnyxFn::getClass() {
	return m_class;
}

jobject NativeOnyxFn::getInitArgs() {
	return m_initObj;
}


	// IPersistentMap utilities ---------------------
	//



	// JNI Entry point, Bootstrapping ---------------
	// 


jobject NativeOnyxFn::init (jobject mapObj) {
	// Assoc in a success value
	return mapObj;
}

/*
 * Class:     org_onyxplatform_api_java_instance_NativeOnyxFn
 * Method:    initNative
 * Signature: (Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_org_onyxplatform_api_java_instance_NativeOnyxFn_initNative
  (JNIEnv *env, jclass clazz, jobject mapObj) 
{
	g_onyxFn = new NativeOnyxFn(env, clazz);
	return g_onyxFn.init(mapObj);
}


// C-Externed entry points for access to runtime and utils --------
//




