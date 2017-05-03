(ns onyx-native.main
  (:gen-class) 
  (:require [onyx-native.instance.bind :as ib]
            [onyx-native.instance.catalog :as ic])
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
            Workflow
            NAPI
            NativeOnyxEnv]
           [org.onyxplatform.api.java.utils 
            AsyncCatalog 
            AsyncLifecycles 
            MapFns 
            VectorFns]  
           [org.onyxplatform.api.java.instance 
            Loader 
            BindUtils 
            OnyxFn
            NativeBindUtils 
            NativeOnyxFn ]))

