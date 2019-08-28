CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99
LIBS = -lm

all: main

main: sequencial.o primesSequentially.o input.o constants.o
	$(CC) $(CFLAGS) sequencial.o constants.o input.o primesSequentially.o -o sequencial

sequencial.o: sequencial.c primesSequentially.h input.h constants.h
	$(CC) $(CFLAGS) -c sequencial.c

primesSequentially.o: primesSequentially.c primesSequentially.h
	$(CC) $(CFLAGS) -c primesSequentially.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

constants.o: constants.c constants.h
	$(CC) $(CFLAGS) -c constants.c

clean:
	rm *.o sequencial