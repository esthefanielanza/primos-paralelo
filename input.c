#include "input.h"
#include "constants.h"

void readInput(char *argv[], int *max, char **type){
  *max = atoi(argv[1]);
  *type = argv[2];
}

int isTypeValid(char *string) {
  int i = 0;

  while(TYPES_INITIALS[i]) {
    if(strlen(string) == 1 && TYPES_INITIALS[i] == string[0]) {
      return 0;
    }

    i++;
  }

  return 1;
}

int isInputValid(int max, char *type) {
  if(max > pow(10, MAX_10_POWER) || isTypeValid(type)) {
    printf("Dados de input inválidos, por favor tente novamente.\n");
    return 0;
  }

  return 1;
}

