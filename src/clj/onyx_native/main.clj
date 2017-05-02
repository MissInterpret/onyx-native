(ns onyx-java.main
  (:gen-class) 
  (:require [onyx-java.instance.bind :as ib]
            [onyx-java.instance.catalog :as ic])
  (:import [org.onyxplatform.api.java 
            API 
            Catalog 
            EnvConfiguration 
            FlowCondition
            FlowConditions
            Job
            Lifecycle
            Lifecycles
            OnyxEnv
            OnyxMap 
            OnyxNames 
            OnyxVector 
            TaskScheduler 
            PeerConfiguration   
            Task
            TaskScheduler
            Trigger
            Triggers
            Window
            Windows
            Workflow]
           [org.onyxplatform.api.java.instance 
            Loader 
            BindUtils 
            OnyxFn]
           [org.onyxplatform.api.java.utils 
            AsyncCatalog 
            AsyncLifecycles 
            MapFns 
            VectorFns]))

