#include <jni.h>

#include "OnyxNative.h"
#include "onyxplatform_test_EmptyFn.h"
#include "onyxplatform_test_MergeFn.h"
#include "onyxplatform_test_AssocFn.h"

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

/*
 * Class:     onyxplatform_test_MergeFn
 * Method:    mergeSimple
 * Signature: (Lclojure/lang/IPersistentMap;Lclojure/lang/IPersistentMap;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_MergeFn_merge
  (JNIEnv *env, jobject inst, jobject m1, jobject m2)
{
	return onyx_merge(m1, m2);
}


/*
 * Class:     onyxplatform_test_DissocFn
 * Method:    dissoc
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_DissocFn_dissoc
  (JNIEnv *env, jobject inst, jobject m, jstring key)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_dissoc(m, k);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}


/** AssocFn ---------------------------------------- */

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocObj
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;Ljava/lang/Object;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocObj
  (JNIEnv *env, jobject inst, jobject m, jstring key, jobject obj)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_assocObj(m, k, obj);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocInt
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;I)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocInt
  (JNIEnv *env, jobject inst, jobject m, jstring key, jint i) 
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_assocInt(m, k, i);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocFloat
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;F)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocFloat
  (JNIEnv *env, jobject inst, jobject m, jstring key, jfloat f)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_assocFloat(m, k, f);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocDouble
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;D)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocDouble
  (JNIEnv *env, jobject inst, jobject m, jstring key, jdouble d)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_assocDouble(m, k, d);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}


/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocBool
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;Z)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocBool
  (JNIEnv *env, jobject inst, jobject m, jstring key, jboolean b)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	jobject result = onyx_assocBool(m, k, b);
	(*env)->ReleaseStringUTFChars(env, key, k);
	return result;
}

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocStr
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;Ljava/lang/String;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocStr
  (JNIEnv *env, jobject inst, jobject m, jstring key, jstring s)
{
	const char *k = (*env)->GetStringUTFChars(env, key, 0);
	const char *str = (*env)->GetStringUTFChars(env, s, 0);
	jobject result = onyx_assocStr(m, k, str);
	(*env)->ReleaseStringUTFChars(env, key, k);
	(*env)->ReleaseStringUTFChars(env, s, str);
	return result;
}

/*
 * Class:     onyxplatform_test_AssocFn
 * Method:    assocKeyword
 * Signature: (Lclojure/lang/IPersistentMap;Ljava/lang/String;Ljava/lang/Object;)Lclojure/lang/IPersistentMap;
 */
JNIEXPORT jobject JNICALL Java_onyxplatform_test_AssocFn_assocKeyword
  (JNIEnv *env, jobject inst, jobject m, jstring key, jobject obj)
{
	return m;
}


