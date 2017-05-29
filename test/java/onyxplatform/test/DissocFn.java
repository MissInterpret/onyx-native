package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * DissocFn is a simple test class extending NativeOnyxFn which is used to test
 * the native dissoc functionality.
 */
public class DissocFn extends NativeOnyxFn {

	public DissocFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Calls the native dissoc implementation
	* @param m The coll
	* @param key The keyword to remove from the map
	* @return The map with the keyword dissoc'ed
	 */
	protected native IPersistentMap dissoc(IPersistentMap m, String key);

	/**
	 * Consumes a map with a single key-value pair
	 * of :dissoc "DISSOC" 
	 * @param m the map to consume
	 * @return an empty map
	 */
	public Object consumeSegment(IPersistentMap m) {
		return dissoc(m, "dissoc");
	}
}
