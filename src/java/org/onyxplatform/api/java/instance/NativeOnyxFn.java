package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.utils.MapFns;
import org.onyxplatform.api.java.instance.Loader;


/**
 *  NativeOnyxFn is the base class for all User type classes that a User wishes
 *  to use as an object instance as a task within an Onyx workflow. 
 *  User classes must extend this NativeOnyxFn, and implement the consumeSegment method.
 */  
public abstract class NativeOnyxFn extends OnyxFn {

	protected static String libraryName;
	protected static boolean libLoaded = false;
	protected static IPersistentMap initArgs;

	protected static native IPersistentMap initNative(Object inst, IPersistentMap m);
	protected static native void releaseNative();


	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}

	/**
 	* Loads the native library. 
	* <p>
	* This operation is per-instance and idempotent.
	*
 	* @param  libName The library name to load 
 	* @param  args The arguments to use during loading
 	* @return      The loading response map
 	*/
	public IPersistentMap loadNativeResources(String libName, IPersistentMap args) 
		throws java.lang.UnsatisfiedLinkError
	{
		if (!libLoaded) {
			libraryName = libName;
			System.loadLibrary(libName);
			initArgs = initNative(this, args);	
			libLoaded = true;
		}
		return initArgs;
	}

	/**
 	* Deletes the native resources associated
	* with this instance.
 	*/
	public void releaseNativeResources() {
		if (libLoaded) {
			releaseNative();
			libLoaded = false;
		}
	}
}
