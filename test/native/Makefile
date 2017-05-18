
CPP=g++
CC=gcc

ONYXDIR="../../src/native"

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -I$(ONYXDIR) -fpic 


LIBNAME=OnyxNativeTest
DYLIB=lib$(LIBNAME).jnilib

all: clean build

build:
	$(CPP) $(CFLAGS) -c "../../src/native/OnyxNative.cpp"
	$(CC) $(CFLAGS) -c OnyxNativeTest.c
	$(CPP) $(LNFLAGS) OnyxNativeTest.o OnyxNative.o -o $(DYLIB)

clean:
	-rm *.o
	-rm *.jnilib

