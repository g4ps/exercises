#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fill_rand_arr(int *arr, int size) {
  const int MIN_ARR = 0;
  const int DELTA  = 100;
  for (int i = 0; i < size; i++) {
    arr[i] = MIN_ARR + (rand() % DELTA);
  }  
}

void print_arr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d", arr[i]);
    if (i + 1 != size) {
      printf(", ");
    }
  }
  printf("\n");
}
