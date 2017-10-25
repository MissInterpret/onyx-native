package org.onyxplatform.api.java.instance;

import clojure.java.api.Clojure;
import clojure.lang.IFn;
import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.OnyxNames;
import org.onyxplatform.api.java.OnyxMap;
import org.onyxplatform.api.java.NativeNames;
import org.onyxplatform.api.java.Catalog;
import org.onyxplatform.api.java.Task;
import org.onyxplatform.api.java.Job;

import org.onyxplatform.api.java.utils.MapFns;

/**
 * NativeBindUtils is a static utility class designed to work with User Classes
 * which extend the OnyxFn abstract class which are backed by native
 * libraries.
 * This utility provides a method which can add an object instance that is
 * derived from a user class to a job catalog.
 * It also provides methods related to memory management of these catalog objects,
 * allowing users to manually unload the instances when they are no longer used
 * by the job.
 */
public class NativeBindUtils
	extends BindUtils
	implements OnyxNames, NativeNames
{

	protected static IFn nativeInstCatFn;

	/**
 	* Loads the clojure namespaces over-riding
	* the base classes
 	*/
	static {
		IFn requireFn = Clojure.var(CORE, Require);

		requireFn.invoke(Clojure.read(NATIVE_CATALOG));
		nativeInstCatFn = Clojure.var(NATIVE_CATALOG, NativeCreate);

		requireFn.invoke(Clojure.read(NATIVE_BIND));
		releaseFn = Clojure.var(NATIVE_BIND, ReleaseInst);
		releaseAllFn = Clojure.var(NATIVE_BIND, ReleaseAllInst);
	}

	/**
	 * Creates and adds an object instance to an existing Catalog object.
	 * The object instance is derived from a user class which extends
	 * the NativeOnyxFn abstract class. To use this method, a name for the object
	 * must be provided, along with the fully qualified user base class,
	 * a map of arguments to use as constructor args for the class,
	 * the library name, initialization parameters,
	 * and the environment parameters batchSize and batchTimeout.
	 * @param  catalog       the catalog object to which the new object instance will be added as a task
	 * @param  taskName      a string to use as a name for the object instance task in the Catalog
	 * @param  batchSize     an integer describing the number of segments that will be read at a time
	 * @param  batchTimeout  an integer describing the longest amount of time (ms) that a task will wait before reading segments
	 * @param  fqClassName   a string naming the fully qualified user class to use in object instance creation
	 * @param  ctrArgs       an IPersistentMap containing arguments to use in the user class constructor
	 * @param  libName   	a string naming the library to be loaded
	 * @param  initArgs       an IPersistentMap containing arguments to use when initializing the native library
	 * @return                returns the updated catalog which includes the added task
	 */

	public static Catalog addFn(Catalog catalog, String taskName,
				    int batchSize, int batchTimeout,
				    String fqClassName, IPersistentMap ctrArgs,
				    String libName, IPersistentMap initArgs)
	{
		IPersistentMap methodCat =
			  (IPersistentMap) nativeInstCatFn.invoke(taskName,
					                    batchSize, batchTimeout,
					                    fqClassName, ctrArgs,
							    libName, initArgs);

		OnyxMap e = MapFns.toOnyxMap(methodCat);
		Task methodTask = new Task(e);
		return catalog.addTask(methodTask);
	}
}
