#!/bin/bash

# TODO: pass clojure language jar as an arg

javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.EmptyFn
javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.AssocFn
javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.DissocFn
javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.GetFn
javah -cp ./clojure-1.8.0.jar:../java/ onyxplatform.test.MergeFn

