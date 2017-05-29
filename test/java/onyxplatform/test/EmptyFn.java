package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * EmptyFn is a simple test class extending NativeOnyxFn which is used to test
 * creating an empty map.
 */
public class EmptyFn extends NativeOnyxFn {

	public EmptyFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Calls the native createEmptyMap implementation
	 * @return The empty map
	 */
	protected native IPersistentMap createEmptyMap();

	/**
	 * Consumes an empty map, returns a 
	 * single key-value pair with an
	 * empty map assoc'ed to :data
	 * @param m The map to consume
	 * @return the empty map
	 */
	public Object consumeSegment(IPersistentMap m) {
		return createEmptyMap();
	}
}
