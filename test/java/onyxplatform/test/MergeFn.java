package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;
import org.onyxplatform.api.java.utils.MapFns;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class MergeFn extends NativeOnyxFn {

	public MergeFn(IPersistentMap m) {
		super(m);
	}

	protected native IPersistentMap merge(IPersistentMap m1, IPersistentMap m2);

	/**
	 * Consumes a map with one value and 
	 * merges a map the key-value pair:
	 *  :test "A"
	 */
	public Object consumeSegment(IPersistentMap m) {
		IPersistentMap m2 = MapFns.emptyMap();
		m2 = MapFns.assoc(m2, "test", new String("A"));
		return merge(m, m2);
	}
}
