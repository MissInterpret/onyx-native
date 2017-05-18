package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class MergeFn extends NativeOnyxFn {

	public MergeFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Consumes a map with one value and 
	 * merges a map with one value.
	 */
	public Object consumeSegment(IPersistentMap m) {

		// TODO: Create an empty map. Assoc 
		//       the value :out "TEST"
		//	 merge with passed map
		return m;
	}
}
