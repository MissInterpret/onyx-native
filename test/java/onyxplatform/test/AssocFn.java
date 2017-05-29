package onyxplatform.test;

import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.instance.NativeOnyxFn;
import org.onyxplatform.api.java.instance.OnyxFn;
import org.onyxplatform.api.java.utils.MapFns;

/**
 * Assoc is a simple test class extending NativeOnyxFn which is used to test
 * the native assoc functionality in an Onyx Job. 
 */
public class AssocFn extends NativeOnyxFn {

	public AssocFn(IPersistentMap m) {
		super(m);
	}

	/**
 	* Calls the native assocObj implementation
	* @param m The coll
	* @param key The keyword
	* @param o The object value to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocObj(IPersistentMap m, String key, Object o);

	/**
 	* Calls the native assocInt implementation
	* @param m The coll
	* @param key The keyword
	* @param v The int value to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocInt(IPersistentMap m, String key, int v);

	/**
 	* Calls the native assocFloat implementation
	* @param m The coll
	* @param key The keyword
	* @param f The float value to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocFloat(IPersistentMap m, String key, float f);

	/**
 	* Calls the native assocDouble implementation
	* @param m The coll
	* @param key The keyword
	* @param d The double value to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocDouble(IPersistentMap m, String key, double d);

	/**
 	* Calls the native assocBool implementation
	* @param m The coll
	* @param key The keyword
	* @param b The boolean value to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocBool(IPersistentMap m, String key, boolean b);

	/**
 	* Calls the native assocStr implementation
	* @param m The coll
	* @param key The keyword
	* @param s The String to assoc to the coll
	* @return The map with the value assoc'ed
 	*/
	protected native IPersistentMap assocStr(IPersistentMap m, String key, String s);

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
	* @param m The map to consume
	* @return The map with the assoc'ed values
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
