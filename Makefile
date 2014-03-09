all:
	g++ -I/Library/Java/JavaVirtualMachines/jdk1.7.0_51.jdk/Contents/Home/include/ -I/Library/Java/JavaVirtualMachines/jdk1.7.0_51.jdk/Contents/Home/include/darwin -shared -o libNativeExample.jnilib NativeExample.cpp

compile:
	javac -cp . NativeExample.java

run:
	java NativeExample
