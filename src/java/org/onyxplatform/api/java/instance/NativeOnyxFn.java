package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

public abstract class NativeOnyxFn extends OnyxFn {

	protected static native IPersistentMap loadNative(IPersistentMap m);
	protected static native boolean unloadNative(IPersistentMap m);

	public static IPersistentMap loadNativeResources(IPersistentMap m) {
		return null;
	}

	public static boolean unloadNativeResources(IPersistentMap args) {
		return true;
	}

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}

	// TODO: native unload on call to destructor
}
