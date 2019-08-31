#include "primesParallel.h"

int FIRST_PRIME = 2;
int IS_PRIME = 0;
int NOT_PRIME = 1;

void calculateMultiples(int max, char * list, int currentMultiple) {
  int j;

  for(j = FIRST_PRIME * currentMultiple; j < max; j += currentMultiple) {
    if(j > max) {
      break;
    }
  
    list[j] = NOT_PRIME;
  }
}

void calculatePrimesSequentially(int max, char *list){

  int LAST_NUMBER_TO_TEST_MULTIPLES = max/2 + 1;

  int currentMultiple;

  for(currentMultiple = FIRST_PRIME; currentMultiple < LAST_NUMBER_TO_TEST_MULTIPLES; currentMultiple++) {
    if(list[currentMultiple] == IS_PRIME) {
      calculateMultiples(max, list, currentMultiple);
    }
  }
}
