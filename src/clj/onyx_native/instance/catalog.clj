(ns onyx-native.instance.catalog 
  (:gen-class)
  (:require [onyx-java.instance.catalog :as cat]))

(defn create-native [task-name batch-size batch-timeout 
                     fqclassname ctr-args 
                     lib-name init-args]
  (let [jentry (cat/create-method task-name batch-size batch-timeout fqclassname ctr-args)]
    (-> jentry
      (assoc :onyx/fn :onyx-native.instance.bind/method) 
      (assoc :native-instance/lib-name lib-name)
      (assoc :native-instance/init-args init-args)
      (update :onyx/params into [:native-instance/lib-name :native-instance/init-args]))))

