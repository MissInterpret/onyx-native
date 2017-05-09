APPNAME=OnyxNativeTest

ONYX_NATIVE_DIR=

CC=g++

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -fpic 

all: clean build

build: 
	$(CC) $(CFLAGS) -c OnyxNative.cpp
	$(CC) $(LNFLAGS) -o lib$(APPNAME).jnilib OnyxNative.o 

clean:
	-rm *.o
	-rm lib*.so
	-rm *.jnilib

run: clean build 
	java -Djava.library.path=. $(APPNAME)

