CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -fopenmp
LIBS = -lm

all: main

main: sequencial.o constants.o input.o primesSequentially.o
	$(CC) $(CFLAGS) sequencial.o constants.o input.o primesSequentially.o -o sequencial $(LIBS)

sequencial.o: sequencial.c primesSequentially.h input.h
	$(CC) $(CFLAGS) -c sequencial.c

primesSequentially.o: primesSequentially.c primesSequentially.h
	$(CC) $(CFLAGS) -c primesSequentially.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

constants.o: constants.c constants.h
	$(CC) $(CFLAGS) -c constants.c

clean:
	rm *.o sequencial