$(CC) = gcc
final: main.o code.o
	$(CC) main.o code.o -o final
main.o: main.c
	$(CC) -c main.c
hello.o: code.c
	$(CC) -c code.c
$(CC) = gcc
