#include "primesSequentially.h"

void calculatePrimesSequentially(int max, char *list){
  int FIRST_PRIME = 2;
  int LAST_NUMBER_TO_TEST_MULTIPLES = max/2 + 1;
  int IS_PRIME = 0;


  int i;

  for(i = FIRST_PRIME; i < LAST_NUMBER_TO_TEST_MULTIPLES; i++) {
    int currentMultiple = i;

    if(list[currentMultiple] == IS_PRIME) {
      while(currentMultiple + i < max) {
        currentMultiple = currentMultiple + i;
        list[currentMultiple] = !IS_PRIME;
      }
    }
  }
}
