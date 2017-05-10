package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.utils.MapFns;

public abstract class NativeOnyxFn extends OnyxFn {

	protected static String libraryName;
	protected static boolean libLoaded = false;
	protected static IPersistentMap initArgs;

	protected static native IPersistentMap initNative(IPersistentMap m);
	protected static native void releaseNative();

	/**
	 * A static proxy that is instance-bound which 
	 * loads the underlying native library if it hasn't
	 * already been loaded for this class.
	 */
	public IPersistentMap loadNativeResources(String libName, IPersistentMap args) {
		System.out.println("NativeOnyxFn::loadNativeResources> loaded? " + libLoaded);
		if (!libLoaded) {
			libraryName = libName;
			System.out.println("NativeOnyxFn::loadNativeResources> loading=" + libName);
//			System.loadLibrary(libName);
//			initArgs = initNative(m);	
			libLoaded = true;
		}
		return initArgs;
	}

	/**
	 * Releases all native VM resources so that
	 * it can be garbage collected.
	 */
	public void releaseNativeResources() {
		System.out.println("NativeOnyxFn::releaseNativeResources>");
		if (libLoaded) {
//		releaseNative();
			libLoaded = false;
		}
	}

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}
}
