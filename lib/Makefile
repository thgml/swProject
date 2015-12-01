.PHONY:all clean

libfuncs.a : func1.o func2.o
	ar rv libfuncs.a func1.o func2.o
func1.o : func1.c func1.o
	gcc -c -g -I ~/2015SW/ch3-make/include func1.c -o func1.o
func2.o : func2.c func2.o
	gcc -c -g -I ~/2015SW/ch3-make/include func2.c -o func2.o
clean:
	rm -f func1.o func2.o
