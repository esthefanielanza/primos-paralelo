#include "constants.h"
#include "output.h"

void printOutput(char *type, double startTime, double endTime, char *list, int max) {
  int i;

  int shouldPrintAll = type[0] == ALL;
  int shouldPrintTime = type[0] == TIME;
  int shouldPrintList = type[0] == LIST;

  int FIRST_PRIME = 2;
  int IS_PRIME = 0;

  if(shouldPrintList == 1 || shouldPrintAll == 1) {
    
    for(i = FIRST_PRIME; i < max; i++) {
      if(list[i] == IS_PRIME) {
        if(i != max - 1) {
          printf("%d ", i);
        } else {
          printf("%d", i);
        }
      } 
    }

    printf("\n");
  }

  if(shouldPrintTime == 1 || shouldPrintAll == 1) {
    printf("%f\n", endTime - startTime);
  }
}