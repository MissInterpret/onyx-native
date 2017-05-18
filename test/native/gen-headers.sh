#!/bin/bash

# TODO: pass clojure language jar as an arg

javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.EmptyFn
