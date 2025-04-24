all: main

clean: main main.o contaspazi.o
	rm main main.o contaspazi.o

main: main.o contaspazi.o
	gcc -g -o main main.o contaspazi.o

main.o: main.c contaspazi.h
	gcc -g -c -o main.o main.c

contaspazi.o: contaspazi.c contaspazi.h
	gcc -g -c -o contaspazi.o contaspazi.c