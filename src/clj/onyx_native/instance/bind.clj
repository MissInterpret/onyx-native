(ns onyx-native.instance.bind
  (:gen-class)
  (:require [onyx-java.instance.bind :as b]
            [onyx-java.instance.catalog :as cat]))

(defn native? [instance]
  (contains? instance :native-instance/lib-name))

(defn instance [id fq-class-name ctr-args lib-name init-args]
  (let [i (b/instance id fq-class-name ctr-args)]
    ; aggressive init as it is idempotent
    (if (native? i)
      (.loadNativeResources init-args))
    i))

(defn method [id fq-class-name ctr-args segment]
  (let [inst-ifn (instance id fq-class-name ctr-args)]
    (inst-ifn segment)))

(defn release [task]
  ; TODO: pull the instance backing this task
  ;       and call releaseNativeResources 
  ;       before the dissoc
  ;
  #_(let [k (keyname (cat/id task))] (if (contains? @instances k) (swap! instances dissoc k))))

(defn release-all [catalog]
  (doseq [task catalog]
    (if (cat/instance? task)
      (release task))))
