#include "constants.c"
#include "input.c"
#include "primesSequentially.c"

int main (int argc, char *argv[]){

  int max;
  char *type;

  readInput(argv, &max, &type);

  if(!isInputValid(max, type)) {
	  return 0;	
  }

  calculatePrimesSequentially(max);

	(void)argc;
	return 0;	
}
