#include <stdio.h>
#include <stdlib.h>
#include "algo.h"

void select_sort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_pos = i;
    for (int j = i; j < size; j++) {
      if (arr[i] < arr[j]) {
	min_pos = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main()
{
  srand(time(NULL));
  int size = (rand() % 10) + 10;  
  int *arr = calloc(size + 1, sizeof(int));
  fill_rand_arr(arr, size);
  print_arr(arr, size);
  select_sort(arr, size);
  print_arr(arr, size);
  return 0;
}

