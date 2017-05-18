package onyxplatform.test;

import clojure.java.api.Clojure;
import clojure.lang.IFn;
import clojure.lang.IPersistentMap;

import org.onyxplatform.api.java.Catalog;
import org.onyxplatform.api.java.Task;
import org.onyxplatform.api.java.utils.MapFns;

import org.onyxplatform.api.java.instance.NativeBindUtils;

/**
 * SingleJavaTest tests a Job running with a single Java function, built
 * using the dynamic class loader. All basic behavior is set up using the
 * JobBuilder base class, while the pure Java object instance function is
 * added within this method itself.
 */
public class SingleJavaTest extends JobBuilder {

	public static final String PASS_FN = "onyxplatform.test.PassFn";

	private String className;
	private String libName;

    /**
     * Constructs a simple Job test that can run a pure java function, loaded
     * from an EDN file which is passed as the only parameter.
     * @param  onyxEnvConfig path to the EDN file specifying how to set up the job
     */
	public SingleJavaTest(String onyxEnvConfig, String className, String libName) {
		super(onyxEnvConfig, 5, 50);
		this.className = className;
		this.libName = libName;
	}

    /**
     * Adds an Object instance of the test function to the Job catalog
     */
	public void configureCatalog() {
		Catalog c = job.getCatalog();
		NativeBindUtils.addFn(c, "pass", batchSize(), batchTimeout(),
				      className, MapFns.emptyMap(),
				      libName, 	 MapFns.emptyMap());
	}
}
