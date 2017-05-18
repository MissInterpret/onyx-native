package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class AssocFn extends NativeOnyxFn {

	public AssocFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Consumes an empty map associating 
	 * a key-value pair for each native 
	 * type.
	 */
	public Object consumeSegment(IPersistentMap m) {
		return m;
	}
}
