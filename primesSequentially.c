void calculatePrimesSequentially(int max) {
  char *numbers = (char *)calloc(max, sizeof(char));
  int FIRST_PRIME = 2;
  int LAST_NUMBER_TO_TEST_MULTIPLES = max/2 + 1;

  for(int i = FIRST_PRIME; i < LAST_NUMBER_TO_TEST_MULTIPLES; i++) {
    int currentMultiple = i;

    if(numbers[currentMultiple] != 1) {
      while(currentMultiple + i < max) {
        currentMultiple = currentMultiple + i;
        numbers[currentMultiple] = 1;
      }
    }
  }

  for(int i = FIRST_PRIME; i < max; i++) {
    if(numbers[i] == 0) {
      printf("%d, ", i);
    }
  }

  free(numbers);
  printf("\n");
}