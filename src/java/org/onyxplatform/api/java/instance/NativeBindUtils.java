package org.onyxplatform.api.java.ninstance;

import clojure.java.api.Clojure;
import clojure.lang.IFn;
import clojure.lang.IPersistentMap;
import clojure.lang.PersistentVector;

import org.onyxplatform.api.java.OnyxNames;
import org.onyxplatform.api.java.NativeNames;
import org.onyxplatform.api.java.OnyxMap;
import org.onyxplatform.api.java.Catalog;
import org.onyxplatform.api.java.Task;
import org.onyxplatform.api.java.Job;

import org.onyxplatform.api.java.utils.MapFns;

public class NativeBindUtils 
	extends org.onyxplatform.api.java.instance.BindUtils
	implements OnyxNames, NativeNames
{

	/**
 	* Loads the clojure namespaces.
 	*/
	static {
    		//IFn requireFn = Clojure.var(CORE, Require);
		//requireFn.invoke(Clojure.read(INSTANCE_CATALOG));
		//instcatFn = Clojure.var(INSTANCE_CATALOG, CreateMethod);
		//releaseFn = Clojure.var(INSTANCE_CATALOG, ReleaseInst);
		//releaseAllFn = Clojure.var(INSTANCE_CATALOG, ReleaseAllInst);
	}

	public static Catalog addFn(Catalog catalog, String taskName, 
				    int batchSize, int batchTimeout,
				    String fqClassName, IPersistentMap ctrArgs) 
	{
		return null;
	}

	public static void unloadInstance(Task task) {
	}

	public static void unloadInstances(Job j) {
	}
}
