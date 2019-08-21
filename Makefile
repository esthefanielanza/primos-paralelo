CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -pthread

all: sequencial

main: sequencial.o constants.o input.o
	$(CC) $(CFLAGS) sequencial.o constants.o -o sequencial

main.o: main.c constants.h input.h
	$(CC) $(CFLAGS) -c sequencial.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

constants.o: constants.c constans.h
	$(CC) $(CFLAGS) -c constants.c

clean:
	rm *.o sequencial