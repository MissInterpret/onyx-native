	Native Compilation 

In order to run the tests you must compile the dependent library.

There are makefile provided for OSX, linux and windows labeled
by extension. They all use g++ as their compiler. 

In practice you must generate the JNI headers for your classes.
In this case the appropriate headers have already been generated for 
the example, in general however onyx-native requires the Clojure 1.8 runtime jar 
be on the classpath when generating headers.

You can see its use in the gen-headers.sh script. 

