#include <omp.h>
#include "input.h"
#include "primesSequentially.h"

int main (int argc, char *argv[]) {
  int max;
  char *type;
  double start, finish;

  readInput(argv, &max, &type);

  if(isInputValid(max, type) == 0) {
	  return 0;	
  }

  start = omp_get_wtime();

  calculatePrimesSequentially(max);

  finish = omp_get_wtime();

  printf("%f %f\n", start, finish);
	(void)argc;
	return 0;
}
