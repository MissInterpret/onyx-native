# Onyx Native - Affordances for native code in Onyx workflows

## Overview

The Onyx Native package was designed to support the use of stateful,
native-backed Java objects in an [Onyx Platform](http://onyxplatform.org) workflow.

## Architectural Approach

Onyx Native builds on new features being added to [Onyx Java](https://github.com/RBerkheimer/onyx-java) that 
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

### (Expected initial publication May 2017, depends on ongoing work to upgrade [Onyx Java](https://github.com/RBerkheimer/onyx-java)



