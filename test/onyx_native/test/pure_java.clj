(ns onyx-native.test.pure-java
  (:gen-class)
  (:import [onyxplatform.test SingleJavaTest SingleCljTest])
  (:require [clojure.test :refer [deftest is]]))

(deftest pass-java-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/PASS_FN "OnyxNativeTest")
          inputs [{:pass-through "PASSTHROUGH"}]
          expected {:out [{:pass-through "PASSTHROUGH"} :done]}
          outputs (.runJobCollectOutputs testObject inputs) ]
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))

(deftest empty-map-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/EMPTY_FN "OnyxNativeTest")
          inputs [{:pass-through "PASSTHROUGH"}]
          expected {:out [{} :done]}
          outputs (.runJobCollectOutputs testObject inputs) ]
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))

(deftest merge-map-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/MERGE_FN "OnyxNativeTest")
          inputs [{:pass-through "PASSTHROUGH"}]
          expected {:out [{:pass-through "PASSTHROUGH" :test "A"} :done]}
          outputs (.runJobCollectOutputs testObject inputs) ]
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))

(deftest dissoc-map-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/DISSOC_FN "OnyxNativeTest")
          inputs [{:dissoc "DISSOC"}]
          expected {:out [{} :done]}
          outputs (.runJobCollectOutputs testObject inputs) ]
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))

(deftest assoc-map-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/ASSOC_FN "OnyxNativeTest")
          inputs [{}]
          expected {:out [{:object {}
                           :int 1
                           :float (float 1.1)
                           :double (double 2.2)
                           :bool true
                           :str "TEST"} :done]}
          outputs (.runJobCollectOutputs testObject inputs) ]
      (println "assoc-map-test> outputs=" outputs)
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))

(deftest get-map-test
    (let [testObject (SingleJavaTest. 
                       "onyx-env.edn" 
                       SingleJavaTest/GET_FN "OnyxNativeTest")
          inputs [{:object {}
                   :int (int 1)
                   :float (float 1.1)
                   :double (double 2.0)
                   :long (long 3.3)
                   :bool true
                   :str "TEST"}]
          expected {:out [{:passed true} :done]}
          outputs (.runJobCollectOutputs testObject inputs)]
      (println "assoc-map-test> outputs=" outputs)
      (.releaseAll testObject)
      (.shutdown testObject)
      (is (= expected outputs))))



