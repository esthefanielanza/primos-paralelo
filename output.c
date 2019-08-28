#include "constants.h"

int printOutput(char *type, int startTime, int endTime, char *list) {
  int i;

  int shouldPrintAll = type[0] == ALL[0];
  int shouldPrintTime = type[0] == TIME[0];
  int shouldPrintList = type[0] == LIST[0];

  if(shouldPrintList || shouldPrintAll) {
    for(i = 0; i < sizeof(list); i++) {
      if(i !== sizeof(list) - 1) {
        printf("%d ", list[i]);
      } else {
        printf("%d\n", list[i]);
      }
    }
  }

  if(shouldPrintTime || shouldPrintAll) {
    printf("%d\n")
  }
}