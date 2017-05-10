
CC=g++

ONYXDIR="../../src/native"

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -I$(ONYXDIR) -fpic 



SOURCES=$(ONYXDIR)/OnyxNative.cpp  
OBJECTS=$(SOURCES:.cpp=.o)

LIBNAME=OnyxNativeTest
DYLIB=lib$(LIBNAME).jnilib

all: clean $(SOURCES) $(DYLIB) 

$(DYLIB): $(OBJECTS)
	$(CC) $(LNFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm *.o
	-rm *.jnilib

