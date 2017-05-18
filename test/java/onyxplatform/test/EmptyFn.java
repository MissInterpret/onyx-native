package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class EmptyFn extends NativeOnyxFn {

	public EmptyFn(IPersistentMap m) {
		super(m);
	}

	protected native IPersistentMap createEmptyMap();

	/**
	 * Consumes an empty map, returns a 
	 * single key-value pair with an
	 * empty map assoc'ed to :data
	 */
	public Object consumeSegment(IPersistentMap m) {
		return createEmptyMap();
	}
}
