
CC=g++

ONYXDIR="../../src/native"

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -I$(ONYXDIR) -fpic 


LIBNAME=OnyxNativeTest
DYLIB=lib$(LIBNAME).jnilib

all: clean build

build:
	$(CC) $(CFLAGS) -c "../../src/native/OnyxNative.cpp"
	$(CC) $(LNFLAGS) OnyxNative.o -o $(DYLIB)

clean:
	-rm *.o
	-rm *.jnilib

