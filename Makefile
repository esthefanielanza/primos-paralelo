CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -Werror -std=c99 -fopenmp
LIBS = -lm

all: parallel sequential clean

parallel: parallel.o constants.o input.o primesParallel.o output.o
	$(CC) $(CFLAGS) parallel.o constants.o input.o primesParallel.o output.o -o parallel $(LIBS)

sequential: sequential.o constants.o input.o primesSequentially.o output.o
	$(CC) $(CFLAGS) sequential.o constants.o input.o primesSequentially.o output.o -o sequential $(LIBS)

sequential.o: sequential.c primesSequentially.h input.h output.h
	$(CC) $(CFLAGS) -c sequential.c

parallel.o: parallel.c primesParallel.h input.h output.h
	$(CC) $(CFLAGS) -c parallel.c

primesSequentially.o: primesSequentially.c primesSequentially.h
	$(CC) $(CFLAGS) -c primesSequentially.c

primesParallel.o: primesParallel.c primesParallel.h
	$(CC) $(CFLAGS) -c primesParallel.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

constants.o: constants.c constants.h
	$(CC) $(CFLAGS) -c constants.c

output.o: output.c output.h
	$(CC) $(CFLAGS) -c output.c

clean:
	rm *.o

