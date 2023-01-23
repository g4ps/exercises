#include "algo.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search(int *arr, int size, int elem) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == elem) {
      return i;
    }
  }
  return -1;
}

int main()
{
  srand(time(NULL));
  int size = (rand() % 10) + 30;  
  int *arr = calloc(size + 1, sizeof(int));
  int needle = rand() % 100;
  fill_rand_arr(arr, size);
  print_arr(arr, size);
  printf("Searching for element '%d'\n", needle);
  int search_ret = search(arr, size, needle);
  printf("Search return: %2d", search_ret); 
  if (search_ret >= 0) {
    printf(", arr[%2d] = %2d\n", search_ret, arr[search_ret]); 
  }
  else {
    printf("\n");
  }
  return 0;
}
