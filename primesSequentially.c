#include "primesSequentially.h"

void calculatePrimesSequentially(int max){
  int FIRST_PRIME = 2;
  int LAST_NUMBER_TO_TEST_MULTIPLES = max/2 + 1;
  int IS_NOT_PRIME = 1;

  char *numbers = (char *)calloc(max, sizeof(char));

  int i;

  for(i = FIRST_PRIME; i < LAST_NUMBER_TO_TEST_MULTIPLES; i++) {
    int currentMultiple = i;

    if(numbers[currentMultiple] != IS_NOT_PRIME) {
      while(currentMultiple + i < max) {
        currentMultiple = currentMultiple + i;
        numbers[currentMultiple] = IS_NOT_PRIME;
      }
    }
  }

  for(i = FIRST_PRIME; i < max; i++) {
    if(numbers[i] != IS_NOT_PRIME) {
      printf("%d, ", i);
    }
  }

  free(numbers);
  printf("\n");
}
