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

public class NativeBindUtils 
	extends BindUtils
	implements OnyxNames, NativeNames
{
	/**
 	* Loads the clojure namespaces.
 	*/
	static {
		// Over-ride the catalog function
		IFn requireFn = Clojure.var(CORE, Require);
		requireFn.invoke(Clojure.read(NATIVE_CATALOG));
		instcatFn = Clojure.var(NATIVE_CATALOG, NativeCreate);
	}

	public static Catalog addFn(Catalog catalog, String taskName, 
				    int batchSize, int batchTimeout,
				    String fqClassName, IPersistentMap ctrArgs,
				    String libName, IPersistentMap initArgs) 
	{
		IPersistentMap methodCat = 
			  (IPersistentMap) instcatFn.invoke(taskName, 
					                    batchSize, batchTimeout, 
					                    fqClassName, ctrArgs,
							    libName, initArgs);

		OnyxMap e = MapFns.toOnyxMap(methodCat);
		Task methodTask = new Task(e);
		return catalog.addTask(methodTask);
	}
}
