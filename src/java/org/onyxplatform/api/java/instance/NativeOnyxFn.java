package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.utils.MapFns;

public abstract class NativeOnyxFn extends OnyxFn {

	protected static boolean libLoaded = false;
	protected static IPersistentMap initArgs;

	protected static native IPersistentMap initNative(IPersistentMap m);
	protected static native void releaseNative();

	public static IPersistentMap loadNativeResources(IPersistentMap m) {
		System.out.println("NativeOnyxFn::loadNativeResources> loaded? " + libLoaded);
		if (!libLoaded) {
			String libName = (String) MapFns.get(m, "native-instance/lib-name");
			System.out.println("NativeOnyxFn::loadNativeResources> loading=" + libName);
//			System.loadLibrary(libName);
//			initArgs = initNative(m);	
			libLoaded = true;
		}
		return initArgs;
	}

	public static void releaseNativeResources() {
		System.out.println("NativeOnyxFn::releaseNativeResources> m=" + m);
//		releaseNative();
	}

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}
}
