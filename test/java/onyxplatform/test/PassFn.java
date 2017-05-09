package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;

/**
 * PassFn is a simple test class extending OnyxFn which is used to test
 * a pure java object instance task in an Onyx Job.
 */
public class PassFn extends NativeOnyxFn {

	/**
	 * Constructor overriding and calling the superconstuctor of OnyxFn.
	 * This must exist for every user Class which uses OnyxFn.
	 * @param  m       An IPersistentMap of constructor arguments
	 */
	public PassFn(IPersistentMap m) {
		super(m);
	}

	/**
	 * Extended abstract method from OnyxFn required by every subclass of OnyxFn.
	 * In this case, consumeSegment simply returns the map that's passed in -
	 * in the general use case, this method can do anything with the segment,
	 * as long as it always returns an IPersistentMap or PersistentVector of
	 * IPersistentMaps.
	 * @param  m             The IPersistentMap containing the input segment
	 * @return     an IPersistentMap or PersistentVector of IPersistentMaps containing method output
	 */
	public Object consumeSegment(IPersistentMap m) {
		return m;
	}
}
