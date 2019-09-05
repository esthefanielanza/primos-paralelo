#include "primesParallel.h"
#include <omp.h>

int FIRST_PRIME = 2;
int IS_PRIME = 0;
int NOT_PRIME = 1;

void calculateMultiples(int max, char * list, int currentMultiple) {
  int j;

  for(j = FIRST_PRIME * currentMultiple; j < max; j += currentMultiple) {
    if(j > max) {
      return;
    }
    list[j] = NOT_PRIME;
  }
}

void calculatePrimesParallel(int max, char *list, int threads){

  int LAST_NUMBER_TO_TEST_MULTIPLES = sqrt(max) + 1;

  int currentMultiple;
  
  double *l_time = (double *)calloc(threads, sizeof(double));

  double t_timer;
  int this_thread;

  #pragma omp parallel for num_threads(threads) schedule(static, 1)
  for(currentMultiple = FIRST_PRIME; currentMultiple < LAST_NUMBER_TO_TEST_MULTIPLES; currentMultiple++) {
    
    t_timer = omp_get_wtime();
    this_thread = omp_get_thread_num();
      
    if(list[currentMultiple] == IS_PRIME) {
      calculateMultiples(max, list, currentMultiple);
    }

    l_time[this_thread] += omp_get_wtime() - t_timer;
  }

  int number;
  for(number = 0; number < threads; number++) {
    printf("Thread %d time %.8lf\n", number, l_time[number]);
  }
}
