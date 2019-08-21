
#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void readInput(char *argv[], int *max, char **type);
int isInputValid(int max, char *type);

#endif
