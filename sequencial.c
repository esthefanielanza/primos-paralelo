#include "constants.c"
#include "input.c"

int main (int argc, char *argv[]){

  int max;
  char *type;

  readInput(argv, &max, &type);

  if(!isInputValid(max, type)) {
	  return 0;	
  }

  printf("max %d \n", max);
  printf("type %s \n", type);

	(void)argc;
	return 0;	
}
