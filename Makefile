# Define options to pass to compiler
CFLAGS=-Wall -g

all: ex1 ex3 ex4 ex5

ex1:
	cc -Wall -g ex1.c -o bin/ex1

ex3:
	cc $(CFLAGS) ex3.c -o bin/ex3

ex4:
	cc $(CFLAGS) ex4.c -o bin/ex4

ex5:
	cc $(CFLAGS) ex5.c -o bin/ex5

clean:
	rm -f bin/*

