package onyxplatform.test;

import clojure.lang.IPersistentMap;
import clojure.lang.PersistentVector;

import org.onyxplatform.api.java.OnyxEnv;
import org.onyxplatform.api.java.Job;
import org.onyxplatform.api.java.Catalog;
import org.onyxplatform.api.java.Lifecycles;

import org.onyxplatform.api.java.utils.MapFns;
import org.onyxplatform.api.java.utils.AsyncCatalog;
import org.onyxplatform.api.java.utils.AsyncLifecycles;

/**
 * JobBuilder is a simple centralized abstract test class useful (and used)
 * for testing single functions in the context of a job backed by simple inputs
 * and outputs backed by core-async. JobBuilder takes a string path of an EDN
 * file describing the Job, turns the spec into a Job, and preps it for running.
 * The configureCatalog method must be overridden by the extending class, which
 * should add the test function. JobBuilder provides simple methods for running
 * the assembled job and gathering outputs.
 */
public abstract class JobBuilder {

    protected OnyxEnv onyxEnv;
    protected Integer batchSize;
    protected Integer batchTimeout;
    protected Job job;

    /**
     * Constructs a JobBuilder using an EDN configuration, a batchSize, and
     * a batchTimeout.
     * @param  onyxEnvConfig path to the EDN file containing the job set up spec
     * @param  batchSize     integer representing the number of segments tasks should consume at once
     * @param  batchTimeout  integer representing the maximum time (ms) a task should wait before beginning
     */
    public JobBuilder(String onyxEnvConfig, int batchSize, int batchTimeout) {

	    onyxEnv = new OnyxEnv("onyx-env.edn", true);

	    this.batchSize = new Integer(batchSize);
	    this.batchTimeout = new Integer(batchTimeout);
	    job = createBaseJob();
    }

    /**
     * Adds asynchronous input/output channels and the appropriate test edges
     * for test functions
     * @return the created Job
     */
    public Job createBaseJob() {

	// Tests have a simple 1-fn core async backed
	// workflow that share all bootstrapping with
	// other tests. Generates all job entries excepting
	// the actual fn catalog entity.
	//


	job = new Job(onyxEnv.taskScheduler());

	job.addWorkflowEdge("in", "pass");
	job.addWorkflowEdge("pass", "out");

	Catalog c = job.getCatalog();
	AsyncCatalog.addInput(c, "in", batchSize, batchTimeout);
	AsyncCatalog.addOutput(c, "out", batchSize, batchTimeout);

	Lifecycles lc = job.getLifecycles();
	AsyncLifecycles.addInput(lc, "in");
	AsyncLifecycles.addOutput(lc, "out");

	return job;
    }

    /**
     * Returns the onyxEnv object associated with the JobBuilder
     * @return OnyxEnv object used by the JobBuilder
     */
    public OnyxEnv getOnyx() {
	    return onyxEnv;
    }

    /**
     * Returns the Job object associated with the JobBuilder
     * @return Job object used by JobBuilder
     */
    public Job getJob() {
	return job;
    }

    /**
     * Returns the batchSize associated with the JobBuilder
     * @return batchSize as integer
     */
    public Integer batchSize() {
	return batchSize;
    }

    /**
     * Returns the batchTimeout associated with the JobBuilder
     * @return batchTimeout as integer
     */
    public Integer batchTimeout() {
	return batchTimeout;
    }

    /**
     * Abstract method must be extended by extending subclass to add other
     * catalog entries to the JobBuilder catalog
     */
    public abstract void configureCatalog();

    /**
     * Runs a job without collecting any outputs - returns a Map representing
     * the started (running) job
     * @param  inputs        A PersistentVector of input segments to use for running the Job
     * @return               an IPersistentMap representing the running job
     */
    public IPersistentMap runJob(PersistentVector inputs) {
	    try {
	    	configureCatalog();
	    	return onyxEnv.submitAsyncJob(job, inputs);
	    } catch (Exception e) {
		shutdown();
		return null;
	    }
    }

    /**
     * Runs a job and collects the outputs, returning them inside an IPersistentMap.
     * @param  inputs    A PersistentVector of input segments to use for running the Job
     * @return          An IPersistentMap containing the outputs produced by the job
     */
    public IPersistentMap runJobCollectOutputs(PersistentVector inputs) {
	    IPersistentMap jmeta = runJob(inputs);
	    return AsyncLifecycles.collectOutputs(job.getLifecycles(), "out");
    }

    /**
     * Completely shuts down the environment associated with the JobBuilder
     */
    public void shutdown() {
	    onyxEnv.stopEnv();
    }
}
