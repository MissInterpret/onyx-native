#!/bin/bash

# TODO: pass clojure language jar as an arg

javah -cp ~/tmp/clojure/clojure-1.8.0.jar:../java/ org.onyxplatform.api.java.instance.NativeOnyxFn
