#include "input.h"
#include "primesSequentially.h"

int main (int argc, char *argv[]) {
  int max;
  char *type;

  readInput(argv, &max, &type);

  if(isInputValid(max, type) == 0) {
	  return 0;	
  }

  calculatePrimesSequentially(max);

	(void)argc;
	return 0;
}
