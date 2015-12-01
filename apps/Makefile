.PHONY: all clean

player: player.c
	gcc -g -c -I ~/2015SW/ch3-make/include player.c -o player.o
	gcc -o player -L ~/2015SW/ch3-make/lib player.o -lfuncs
clean:
	rm -f player.o
