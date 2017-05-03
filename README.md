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

Onyx-native parallels onyx-java's approach offering additional native affordances to manage the underlying native resources provided via a dyanmic library.<br>
<br>
##### Java

Usage and impl java class

##### Native

Create a nifty native library to use

## NativeOnyxFn and interop Utilities

All the deets on affordances


### Expected initial publication Summer 2017, depends on ongoing work to upgrade [onyx-java](https://github.com/RBerkheimer/onyx-java)



