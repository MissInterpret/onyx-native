package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;
import org.onyxplatform.api.java.utils.MapFns;

/**
 * GetFn is a simple test class extending NativeOnyxFn which is used to test
 * the get map functions.
 */
public class GetFn extends NativeOnyxFn {

	public GetFn(IPersistentMap m) {
		super(m);
	}

	/**
 	* Calls the native getObj implementation
	* @param m The coll
	* @param key The keyword
	* @return The object mapped to the keyword
 	*/
	protected native IPersistentMap getObj(IPersistentMap m,String key);

	/**
 	* Calls the native getInt implementation
	* @param m The coll
	* @param key The keyword
	* @return The int mapped to the keyword
 	*/
	protected native int getInt(IPersistentMap m,String key);

	/**
 	* Calls the native getFloat implementation
	* @param m The coll
	* @param key The keyword
	* @return The float mapped to the keyword
 	*/
	protected native float getFloat(IPersistentMap m, String key);

	/**
 	* Calls the native getDouble implementation
	* @param m The coll
	* @param key The keyword
	* @return The double mapped to the keyword
 	*/
	protected native double getDouble(IPersistentMap m, String key);

	/**
 	* Calls the native getLong implementation
	* @param m The coll
	* @param key The keyword
	* @return The long mapped to the keyword
 	*/
	protected native long getLong(IPersistentMap m, String key);

	/**
 	* Calls the native getBool implementation
	* @param m The coll
	* @param key The keyword
	* @return The boolean mapped to the keyword
 	*/
	protected native boolean getBool(IPersistentMap m, String key);

	/**
 	* Calls the native getStr implementation
	* @param m The coll
	* @param key The keyword
	* @return The String mapped to the keyword
 	*/
	protected native String getStr(IPersistentMap m, String key);

	/**
	 * Expects the passed map to be populated
	 * with the following key-value pairs
	 * that follows the key convention of
	 *
	 * :type-name  i.e. :int :float, etc
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
	 * @param m The map to consume
	 * @return an empty map or a map with ":passed false" 
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

		return MapFns.assoc(result, "passed", new Boolean(true));
	}
}
