# Onyx Native - Affordances for native code in Onyx workflows

## Overview

The Onyx Native package was designed to support the use of stateful,
native-backed Java objects in an [Onyx Platform](http://onyxplatform.org) workflow.

## Architectural Approach

Onyx Native builds on new features being added to [Onyx Java](http://github.com/onyx-platform/onyx-java)) which supports using stateful Java objects in a workflow.

This packages provides a simple and non-invasive matching set of Java and C 
interfaces that leverage Java's JNI and the memory management available in C++
to hide the native bootstrapping process. This allows for the inclusion of native code
in a way that requires few changes to native code and that is a natural fit in an 
information-flow-based workflow system that is purely functional.



(Expected initial publication April 2017, depends on ongoing work to upgrade 
 [Onyx Java](http://github.com/onyx-platform/onyx-java)).







