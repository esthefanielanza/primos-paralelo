CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -fopenmp

all: sequencial

main: sequencial.o constants.o input.o primesSequentially.o
	$(CC) $(CFLAGS) sequencial.o constants.o -o sequencial

main.o: main.c constants.h input.h primesSequentially.c
	$(CC) $(CFLAGS) -c sequencial.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

constants.o: constants.c constans.h
	$(CC) $(CFLAGS) -c constants.c

primesSequentially.o: primesSequentially.c primesSequentially.h
	$(CC) $(CFLAGS) -c primesSequentially.c

clean:
	rm *.o sequencial