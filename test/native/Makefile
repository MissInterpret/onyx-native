
CPP=g++
CC=gcc

ONYXDIR="../../src/native"
JNIDIR="/Library/Java/JavaVirtualMachines/jdk1.8.0_102.jdk/Contents/Home/include"
JNIMDDIR="/Library/Java/JavaVirtualMachines/jdk1.8.0_102.jdk/Contents/Home/include/darwin"

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -I$(ONYXDIR) -I$(JNIDIR) -I$(JNIMDDIR) -fpic 


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
