package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.utils.MapFns;
import org.onyxplatform.api.java.instance.Loader;

public abstract class NativeOnyxFn extends OnyxFn {

	// Class ----------------------------------------
	//

	protected static String libraryName;
	protected static boolean libLoaded = false;
	protected static IPersistentMap initArgs;

	protected static native IPersistentMap initNative(Object inst, IPersistentMap m);
	protected static native void releaseNative();


	// Instance -------------------------------------
	//

	/**
	 * A proxy that is instance-bound which 
	 * loads the underlying native library if it hasn't
	 * already been loaded for this class.
	 *
	 * This maps one instance to one backing classloader
	 * that is tied to this instance. Onyx-java creates
	 * a unique instance that contains its own classloader.
	 *
	 * The static find-class 
	 */
	public IPersistentMap loadNativeResources(String libName, IPersistentMap args) 
		throws java.lang.UnsatisfiedLinkError
	{
		if (!libLoaded) {
			libraryName = libName;
			System.out.println("NativeOnyxFn::loadNativeResources> loading=" + libName);
			System.loadLibrary(libName);
			initArgs = initNative(this, args);	
			libLoaded = true;
		}
		return initArgs;
	}

	/**
	 * Releases all native VM resources so that
	 * it can be garbage collected.
	 */
	public void releaseNativeResources() {
		if (libLoaded) {
			releaseNative();
			libLoaded = false;
		}
	}

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}
}
