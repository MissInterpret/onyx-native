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
public class AssocFn extends NativeOnyxFn {

	public AssocFn(IPersistentMap m) {
		super(m);
	}

	protected native IPersistentMap assocObj(IPersistentMap m, String key, Object o);
	protected native IPersistentMap assocInt(IPersistentMap m, String key, int v);
	protected native IPersistentMap assocFloat(IPersistentMap m, String key, float f);
	protected native IPersistentMap assocDouble(IPersistentMap m, String key, double d);
	protected native IPersistentMap assocBool(IPersistentMap m, String key, boolean b);
	protected native IPersistentMap assocStr(IPersistentMap m, String key, String s);
	protected native IPersistentMap assocKeyword(IPersistentMap m, String key, Object kw);

	/**
	 * Consumes an empty map and associates
	 * a key-value pair for each native 
	 * type returning:
	 *
	 * {:object {}
	 *  :int 1
	 *  :float 1.1
	 *  :double 2.2
	 *  :bool true
	 *  :str "TEST"
	 *  }
	 */
	public Object consumeSegment(IPersistentMap m) {

		IPersistentMap em = MapFns.emptyMap();
		IPersistentMap am = assocObj(m, "object", em);

		int i = 1;
		am = assocInt(am, "int", i);

		float f = 1.1f;
		am = assocFloat(am, "float", f);

		double d = 2.2d;
		am = assocDouble(am, "double", d);

		boolean b = true;
		am = assocBool(am, "bool", b);

		String s = "TEST";
		return assocStr(am, "str", s);
	}
}
