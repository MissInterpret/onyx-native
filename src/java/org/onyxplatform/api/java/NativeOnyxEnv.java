package org.onyxplatform.api.java;

import clojure.lang.IPersistentMap;

public class NativeOnyxEnv extends OnyxEnv {

	public NativeOnyxEnv(String onyxEnvConfig) {
		super(onyxEnvConfig);
	}

	// Over-ride job submission to use NAPI
	// so that all depended Clojure utilities
	// are available during Job runtime
	//
 	public IPersistentMap submitJob(Job job) {
		try {
			return NAPI.submitJob(peerConfig, job);
		}
		catch (Exception e) {
			System.out.println("Submit job failed. Exception follows:");
			System.out.println(e);
			return null;
		}
	}
}
