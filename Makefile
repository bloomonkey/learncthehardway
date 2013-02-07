CFLAGS=-Wall -g

all: ex1

ex1:
	cc -Wall -g ex1.c -o bin/ex1

clean:
	rm -f bin/*

