package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.utils.MapFns;

public abstract class NativeOnyxFn extends OnyxFn {

	protected static boolean libLoaded = false;
	protected static IPersistentMap initArgs;

	protected static native IPersistentMap initNative(IPersistentMap m);
	protected static native void releaseNative();

	public static IPersistentMap loadNativeResources(IPersistentMap m) {
		if (!libLoaded) {
			String libName = (String) MapFns.get(m, "native-instance/lib-name");
			System.loadLibrary(libName);
			initArgs = initNative(m);	
			libLoaded = true;
		}
		return initArgs;
	}

	public static void releaseNativeResources(IPersistentMap m) {
		releaseNative();
	}

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}
}
