#include <omp.h>

#include "input.h"
#include "primesSequentially.h"
#include "output.h"

int main (int argc, char *argv[]) {
  int max;
  char *type;
  double startTime, finishTime;

  readInput(argv, &max, &type);

  if(isInputValid(max, type) == 0) {
	  return 0;	
  }

  char *list = (char *)calloc(max, sizeof(char));

  startTime = omp_get_wtime();

  calculatePrimesSequentially(max, list);

  finishTime = omp_get_wtime();

  printOutput(type, startTime, finishTime, list, max);

  free(list);

	(void)argc;
	return 0;
}
