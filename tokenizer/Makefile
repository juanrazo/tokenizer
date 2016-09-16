all:tokenizer

test.o:test.c
	gcc -c test.c

test:test.o stringutils.o
	gcc -o test test.o stringutils.o

stringutils.o:stringutils.c
	gcc -c stringutils.c

tokenizer.o:tokenizer.c
	gcc -c tokenizer.c

tokenizer:tokenizer.o stringutils.o
	gcc -o tokenizer tokenizer.o stringutils.o

clean:
	find . -type f -not -name '*.h' -not -name '*.c' -not -name 'Makefile' -not -name 'makefile' | xargs rm