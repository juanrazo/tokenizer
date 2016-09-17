all:tokenizer

test.o:test.c
	gcc -c test.c

test:test.o mytoc.o
	gcc -o test test.o mytoc.o

mytoc.o:mytoc.c
	gcc -c mytoc.c

tokenizer.o:tokenizer.c
	gcc -c tokenizer.c

tokenizer:tokenizer.o mytoc.o
	gcc -o tokenizer tokenizer.o mytoc.o

clean:
	find . -type f -not -name '*.h' -not -name '*.c' -not -name 'Makefile' -not -name 'makefile' -not -name '*.txt'| xargs rm
