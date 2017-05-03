package org.onyxplatform.api.java;

import clojure.java.api.Clojure;
import clojure.lang.IFn;

public class NAPI extends API 
	implements NativeNames
{
	static {
		// Ensure that the onyx-native clj peer
		// is loaded into the runtime context 
		// before a job is run.
		//
		IFn requireFn = Clojure.var(CORE, Require);
		requireFn.invoke(Clojure.read(NATIVE_BIND));
	}
}
