package org.onyxplatform.api.java.instance;

import clojure.lang.IPersistentMap;

public abstract class NativeOnyxFn extends OnyxFn {

	public NativeOnyxFn(IPersistentMap m) {
		super(m);
	}

	// TODO: native unload on call to destructor
}
