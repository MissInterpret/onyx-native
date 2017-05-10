LIBNAME=OnyxNativeTest

CC=g++


LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -fpic 

all: clean build

#TODO: Put all libs in one library? 2 ? 

build: 
	$(CC) $(CFLAGS) -c OnyxNative.cpp
	$(CC) $(LNFLAGS) -o lib$(LIBNAME).jnilib OnyxNative.o 

clean:
	-rm *.o
	-rm lib*.so
	-rm *.jnilib

run: clean build 
	java -Djava.library.path=. $(LIBNAME)

