package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;

/**
 * PassFn is a simple test class extending NativeOnyxFn which is used to test
 * a pure java object instance task in an Onyx Job. This tests simple library
 * loading and unloading.
 */
public class GetFn extends NativeOnyxFn {

	public GetFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Consumes a map that contains one of each native 
	 * (boxed) type and returns a map with a boolean:
	 * :success true or false.
	 */
	public Object consumeSegment(IPersistentMap m) {
		return m;
	}
}
