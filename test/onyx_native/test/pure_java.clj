(ns onyx-native.test.pure-java
  (:gen-class)
  (:import [onyxplatform.test SingleJavaTest SingleCljTest])
  (:require [clojure.test :refer [deftest is]]))

(deftest single-java-test
    (let [testObject (SingleJavaTest. "onyx-env.edn")
          inputs [{:pass-through "PASSTHROUGH"}]
          expected {:out [{:pass-through "PASSTHROUGH"} :done]}
          outputs (.runJobCollectOutputs testObject [{:pass-through "PASSTHROUGH"}])]
        (.shutdown testObject)
        (is (= (first inputs) (first (:out outputs))))))

(deftest gc-test
    (let [testObject (SingleJavaTest. "onyx-env.edn")
          inputs [{:pass-through "PASSTHROUGH"}]
          expected "Success!"
          job-meta (.runJob testObject [{:pass-through "PASSTHROUGH"}])
          env (.getOnyx testObject) ]
      (try
        (is (.gc env))
        (finally (.shutdown testObject)))))

