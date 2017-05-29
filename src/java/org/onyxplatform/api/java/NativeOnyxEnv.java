package org.onyxplatform.api.java;

import clojure.lang.IPersistentMap;

/**
 *  High level functionality and general utilities for environment control,
 *  such as peer configuration and environment configuration management, as
 *  well as job control (starting, stopping, waiting), and garbage collection.
 *  NativeOnyxEnv should be used as an API utility/convenience class, that holds
 *  an OnyxEnv object for use in running jobs.
 *  
 * **Note** This class is to ensure that the assets necessary for 
 * native loading are available at runtime.
 */ 
public class NativeOnyxEnv extends OnyxEnv {

	/**
	 *  Constructs a new OnyxEnv object based on a string representing a path
	 *  to an EDN file (that contains a map specifying environment conditions
	 *  with keyword value pairs).
	 *  @param  onyxEnvConfig (string) path to the EDN file containing environment spec
	 */
	public NativeOnyxEnv(String onyxEnvConfig) {
		super(onyxEnvConfig);
	}

	/**
	 * Constructs a new OnyxEnv object based on a string representing a path
	 * to an EDN file (that contains a map specifying environment conditions
	 * with keyword value pairs), and a boolean for convenience in automatically
	 * starting the environment upon creation.
	 * @param  onyxEnvConfig (string) path to the EDN file containing environment spec
	 * @param  startOnyx     boolean specifies whether the environment should start
	 */ 
	public NativeOnyxEnv(String onyxEnvConfig, boolean startOnyx) {
		super(onyxEnvConfig, startOnyx);
	}

	/**
 	* Submits the specified job object using the OnyxEnv object. The OnyxEnv must
 	* be started to successfully run the Job.
 	* @param  job           Job object to be run in the started OnyxEnv object
 	* @return     a map of the started job if successful
 	*/ 
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
