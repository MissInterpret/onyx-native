(defproject onyx-native "0.0.9-SNAPSHOT"
  :license {:name "Eclipse Public License"
            :url "https://github.com/onyx-platform/onyx-native"}
  :dependencies [[org.clojure/clojure "1.8.0"]
                 [clj-stacktrace "0.2.8"]
                 ; TODO: Migrate this when onyx-java is added to 
                 ;       Onyx Platform CI
                 ;
                 [onyx-java "0.1.0-SNAPSHOT"] ]
  :source-paths ["src/clj" "test"]
  :java-source-paths ["src/java" "test/java"]
  :javac-options ["-target" "1.8" "-source" "1.8" "-Xlint:unchecked"]
  ; Adds the test/native directory to the runtime library path
  :java-opts [ ~(str "-Djava.library.path=./test/native:"  (System/getProperty "java.library.path"))]
  :resource-paths ["resources"]
  :repl-options {:init-ns onyx-native.main
                 :caught clj-stacktrace.repl/pst+ }
  :profiles {:uberjar {:aot :all}
             :dev {:dependencies [[org.clojure/tools.namespace "0.2.11"]]
                   :plugins [[lein-update-dependency "0.1.2"]
                             [lein-pprint "1.1.1"]
                             [lein-set-version "0.4.1"]
                             [lein-javadoc "0.3.0"] ] 
                   :javadoc-opts  {:package-names ["org.onyxplatform.api.java.instance" 
                                                   "org.onyxplatform.api.java.utils" 
                                                   "org.onyxplatform.api.java" 
                                                   "onyxplatform.test"] 
                                   :output-dir "docs"}}})
