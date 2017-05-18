#include <jni.h>

#include "OnyxNative.h"
#include "onyxplatform_test_EmptyFn.h"

/*
 * Class:     onyxplatform_test_EmptyFn
 * Method:    createEmptyMap
 * Signature: ()Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_EmptyFn_createEmptyMap
  (JNIEnv *env, jobject obj)
{
	return onyx_emptyMap();
}

