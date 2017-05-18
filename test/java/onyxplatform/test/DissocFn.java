package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class DissocFn extends NativeOnyxFn {

	public DissocFn(IPersistentMap m) {
		super(m);
	}

	protected native IPersistentMap dissoc(IPersistentMap m, String key);

	/**
	 * Consumes a map with a single key-value pair
	 * of :dissoc "DISSOC" 
	 * returns an empty map
	 */
	public Object consumeSegment(IPersistentMap m) {
		return dissoc(m, "dissoc");
	}
}
