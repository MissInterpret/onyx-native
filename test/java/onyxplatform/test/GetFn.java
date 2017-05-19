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
	protected native long getLong(IPersistentMap m, String key);
	protected native boolean getBool(IPersistentMap m, String key);
	protected native String getStr(IPersistentMap m, String key);

	// TODO: Figure out how to test a keyword object 
	//       requires addition of keyword assoc affordances
	//       in onyx-java
	//
	//protected native Object getKeyword(IPersistentMap m, String key);

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
	 *  :long 3
	 *  :bool true
	 *  :str "TEST"
	 *  }
	 *
	 * Returns a map containing:
	 * {:passed true/false}
	 */
	public Object consumeSegment(IPersistentMap m) {

		IPersistentMap result = MapFns.emptyMap();
		IPersistentMap failed = MapFns.assoc(result, "passed", new Boolean(false));

		IPersistentMap map = getObj(m, "object");
		if (!MapFns.isEmpty(map)) {
			return failed;
		}

		int i = getInt(m, "int");
		if (i != 1) {
			System.out.println("getInt> failed. i=" + i);
			return failed;
		}

		float f = getFloat(m, "float");
		if (f != 1.1f) {
			System.out.println("getInt> failed. f=" + f);
			return failed;
		}

		long l = getLong(m, "long");
		if (l != 3) {
			System.out.println("getLong> failed.");
			return failed;
		}

		double d = getDouble(m, "double");
		if (d != 2.0d) {
			return failed;
		}

		boolean b = getBool(m, "bool");
		if (!b) {
			System.out.println("getInt> failed. b=" + b);
			return failed;
		}

		String s = getStr(m, "str");
		if (s != "TEST") {
			System.out.println("getStr> failed. s=" + s);
			return failed;
		}

		//Object kw = getKeyword(m, "keyword");

		return MapFns.assoc(result, "passed", new Boolean(true));
	}
}
