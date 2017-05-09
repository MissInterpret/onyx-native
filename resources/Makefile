APPNAME=OnyxNative

CC=g++

LNFLAGS=-dynamiclib -I/System/Library/Frameworks/JavaVM.framework/Headers -framework JavaVM
CFLAGS=-I"/System/Library/Frameworks/JavaVM.framework/Headers" -fpic 

all: clean build

# TODO: Make a simpler list
#
#  ? Should this even be here? 

build: 
	$(CC) $(CFLAGS) -c OnyxNative.cpp
	$(CC) $(LNFLAGS) -o lib$(APPNAME).jnilib OnyxNative.o 

clean:
	-rm *.o
	-rm lib*.so
	-rm *.jnilib

run: clean build 
	java -Djava.library.path=. $(APPNAME)

