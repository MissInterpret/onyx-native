# onyx-native - Affordances for native code in Onyx workflows

## Overview

The onyx-native package was designed to support the use of stateful,
native-backed Java objects in an [Onyx Platform](http://onyxplatform.org) workflow.

## Architectural Approach

Onyx-native builds on new features being added to [onyx-java](https://github.com/RBerkheimer/onyx-java) that 
provide support for the use of stateful Java instances in a workflow.<br>
<br>
This packages provides a simple and non-invasive matching set of Java and C 
interfaces that leverage Java's JNI and C++ to enable bootstrapping 
and memory management of native code in an Onyx workflow. <br>
<br>
This allows for the inclusion of native code in a way that requires few changes 
and that is a natural fit to an information-flow-based workflow 
system that is purely functional.<br>
<br>

### Using Java Instances

Onyx-java provides affordances for inclusion of Java instances in a workflow via specialized catalog tools:<br>
<br>

```
import org.onyxplatform.api.java.instance.BindUtils;

Catalog catalog = new Catalog();

String taskName = "pass";
String fullyQualifiedName = "onyxplatform.test.PassFn";
IPersistentMap ctrArgs = MapFns.emptyMap();

int batchSize = 5;
int batchTimeout = 50;

BindUtils.addFn(catalog, batchSize, batchTimeout, fullyQualifiedName, ctrArgs);
```
<br>
Which loads a pure Java class derived from *OnyxFn*<br>

```
package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.OnyxFn;

public class PassFn extends OnyxFn {

        public PassFn(IPersistentMap m) {
                super(m);
        }

        public Object consumeSegment(IPersistentMap m) {
                return m;
        }
}
```

### Using Native-Backed Instances

Onyx-native provides additional support for native-backed instances using a parallel set of utility functions and native-specific versions of the core API and runtime utility class *OnyxEnv*. <br>
<br>
The following sections demonstrate use of the native-specific features along with the interfaces and utilities at each level of abstraction.<br>
<br>

#### Basic Usage

Onyx-native parallels onyx-java's approach offering additional native affordances to access runtime VM resources along with utilities (Both C++ and C) to directly manipulate Clojure maps in JNI functions.<br>
<br>

#### Java

Onyx-native follows the same approach that onyx-java does (shown above) with additions to 
specife the library along with initialization arguments. These are used along with native-specific 
versions of the core API (*NAPI*) and *OnyxEnv* (*NativeOnyxEnv*) to load and bootstrap your 
native-backed instance at runtime.<br>

<br>
As before, you use *NativeBindUtils* to generate a catalog entry:<br>
<br>

<br>
You then provide a concrete subclass of *NativeOnyxFn*. *NativeOnyxFn* provides an addtional static 
function which bootstraps the backing library and intializes native resources:<br>
<br>

<br>
Note that *NativeOnyxFn* only provides the means for easy use of native calls and an 
assurence of runtime consistency. Your concrete subclass is not forced to use any native methods 
when over-riding *consumeSegment*.
<br>

#### Native

Create a nifty native library to use!<br>
<br>

### Interop Utilities

The *OnyxNative* support class provides both C and C++ accessors which make Clojure IPersistentMap
manipulation straightforward. It also provides access to a global back-pointer to the VM runtime,
the jclass object for the peer class as well as functions that encapsulate common setup for
JNI objects like jmethodID's making the creation of from-native callbacks straightfoward for functionality
like logging, etc.<br>
<br>

#### VM 

Using JNI functions require some combination of paramters that include a jclass, and often a jmethodID. 
Obtaining them from fully-qualified class name requires stereotyped boilerplate. These functions wrap 
this functionality:

##### C++

```
JNIEnv* getEnv();
jclass  getCurrentClass();
jclass  getClass(std::string className);
jmethodID getMethod(std::string clazz, std::string name, std::string decl);
jstring toJavaString(std::string s);
```

##### C

```
JNIEXPORT JNIEnv* onyx_getJNIEnv();
JNIEXPORT jclass  onyx_getClass(const char* pFqClassName);
JNIEXPORT jclass  onyx_getCurrentClass();
JNIEXPORT jmethodID onyx_getMethod(const char* clazz, const char* name, const char* decl);
```

#### Map 

Manipulation of Clojure maps' is at the heart of Onyx's processing approach. While this can be 
avoided by native interface design, the provided set of map manipulation functions lower the
barrier to entry of their use in native code.<br>
<br>
Native type conversion affordances reduce the boilerplate necessary when using basic native types, 
but due to variable arity handling across the Native/VM boundry they are restricted to the 
basic set of manipulation functions:

##### C++

```
jobject emptyMap();
jobject merge(jobject a, jobject b);

jobject         getObj(jobject ipmap, std::string key);
int             getInt(jobject ipmap, std::string key);
long            getLong(jobject ipmap, std::string key);
float           getFloat(jobject ipmap, std::string key);
double          getDouble(jobject ipmap, std::string key);
bool            getBool(jobject ipmap, std::string key);
std::string     getStr(jobject ipmap, std::string key);

jobject assocObj(jobject ipmap, std::string key, jobject value);
jobject assocInt(jobject ipmap, std::string key, int value);
jobject assocLong(jobject ipmap, std::string key, long value);
jobject assocFloat(jobject ipmap, std::string key, float value);
jobject assocDouble(jobject ipmap, std::string key, double value);
jobject assocBool(jobject ipmap, std::string key, bool value);
jobject assocStr(jobject ipmap, std::string key, std::string value);

jobject dissoc(jobject ipmap, std::string key);
```

##### C

```
JNIEXPORT jobject       onyx_emptyMap();
JNIEXPORT jobject       onyx_merge(jobject a, jobject b);

JNIEXPORT jobject       onyx_getObj(jobject ipmap, const char* key);
JNIEXPORT int           onyx_getInt(jobject ipmap, const char* key);
JNIEXPORT long          onyx_getLong(jobject ipmap, const char* key);
JNIEXPORT float         onyx_getFloat(jobject ipmap, const char* key);
JNIEXPORT double        onyx_getDouble(jobject ipmap, const char* key);
JNIEXPORT bool          onyx_getBool(jobject ipmap, const char* key);
JNIEXPORT const char*   onyx_getStr(jobject ipmap, const char* key);

JNIEXPORT jobject       onyx_assocObj(jobject ipmap, const char* key, jobject value);
JNIEXPORT jobject       onyx_assocInt(jobject ipmap, const char* key, int value);
JNIEXPORT jobject       onyx_assocLong(jobject ipmap, const char* key, long value);
JNIEXPORT jobject       onyx_assocFloat(jobject ipmap, const char* key, float value);
JNIEXPORT jobject       onyx_assocDouble(jobject ipmap, const char* key, double value);
JNIEXPORT jobject       onyx_assocBool(jobject ipmap, const char* key, bool value);
JNIEXPORT jobject       onyx_assocStr(jobject ipmap, const char* key, std::string value);

JNIEXPORT jobject       onyx_dissoc(jobject ipmap, const char*);
```


### Memory Management Notes 
Outline how library unloading works and its implications for memory held by native libraries.<br>
<br>

### Expected initial publication Summer 2017, depends on ongoing work to upgrade [onyx-java](https://github.com/RBerkheimer/onyx-java)



