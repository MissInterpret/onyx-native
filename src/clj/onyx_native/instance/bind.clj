(ns onyx-native.instance.bind
  (:gen-class)
  (:import org.onyxplatform.api.java.instance.NativeOnyxFn)
  (:require [onyx-java.instance.bind :as b]
            [onyx-java.instance.catalog :as cat]))

(defn native? [instance]
  (contains? instance :native-instance/lib-name))

(defn instance [id fq-class-name ctr-args lib-name init-args]
  (let [^NativeOnyxFn i (b/instance id fq-class-name ctr-args)]
    ; aggressive init as it is idempotent
    (.loadNativeResources i lib-name init-args) 
    i))

(defn method [id fq-class-name ctr-args lib-name init-args segment]
  (let [inst-ifn (instance id fq-class-name ctr-args lib-name init-args)]
    (inst-ifn segment)))

(defn release [task]
  (let [id (b/task-id task)
        ^NativeOnyxFn inst (b/instance id) ] 
    (if-not (nil? inst) 
      (do
        (.releaseNativeResources inst)
        (b/release task)))))

(defn release-all [catalog]
  (doseq [task catalog]
    (if (native? task)
      (release task)
      (b/release task))))
