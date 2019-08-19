CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -pthread

all: main

main: main.o
	$(CC) $(CFLAGS) main.o -o ep1

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm *.o tp3