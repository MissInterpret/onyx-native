(ns onyx-native.instance.bind
  (:gen-class)
  (:require [onyx-java.instance.bind :as b]))

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

