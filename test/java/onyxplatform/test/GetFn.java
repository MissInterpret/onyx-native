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
public class GetFn extends NativeOnyxFn {

	public GetFn(IPersistentMap m) {
		super(m);
	}

	protected native IPersistentMap getObj(IPersistentMap m,String key);
	protected native int getInt(IPersistentMap m,String key);
	protected native float getFloat(IPersistentMap m, String key);
	protected native double getDouble(IPersistentMap m, String key);
	protected native boolean getBool(IPersistentMap m, String key);
	protected native String getStr(IPersistentMap m, String key);
	//protected native Object getKeyword(IPersistentMap m, String key);

	// TODO: Figure out how to test a keyword object 
	//       requires addition of keyword assoc affordances
	//       in onyx-java
	//
	protected native Object getKeyword(IPersistentMap m, String key);

	/**
	 * Expects the passed map to be populated
	 * with the following key-value pairs
	 * that follows the key convention of:
	 *
	 *  :<type>  i.e. :int :float, etc
	 *
	 * {:object {}
	 *  :int 1
	 *  :float 1.1
	 *  :double 2.2
	 *  :bool true
	 *  :str "TEST"
	 *  }
	 *
	 * Returns a map containing:
	 * {:passed true/false}
	 */
	public Object consumeSegment(IPersistentMap m) {

		boolean passed = false;

		IPersistentMap map = getObj(m, "object");
		int i = getInt(m, "int");
		float f = getFloat(m, "float");
		double d = getDouble(m, "double");
		boolean b = getBool(m, "boolean");
		String s = getStr(m, "string");
		//Object kw = getKeyword(m, "keyword");

		IPersistentMap result = MapFns.emptyMap();
		if (passed) {
			Boolean r = new Boolean(true);
			return result;
		}
		else {
			Boolean r = new Boolean(true);
			return result;
		}
	}
}
