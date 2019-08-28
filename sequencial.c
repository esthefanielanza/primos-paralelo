#include <omp.h>

#include "constants.c"
#include "input.c"
#include "primesSequentially.c"

int main (int argc, char *argv[]){

  int max;
  char *type;
  double start, finish;

  readInput(argv, &max, &type);

  if(!isInputValid(max, type)) {
	  return 0;	
  }

  start = omp_get_wtime();

  calculatePrimesSequentially(max);

  finish = omp_get_wtime();

	(void)argc;
	return 0;	
}
