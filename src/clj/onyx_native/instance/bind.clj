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


;; TODO: Need to over-ride these so that our 
;;       native release is called so that
;;       the global ref held in native code
;;       is let go of.
;;
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
