#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "algo.h"

struct pos {
  int p1;
  int p2;
};

struct pos sum_of_ints (int *arr, int size, int x) {
  merge_sort(arr, size);
  int i = 0;
  int j = size - 1;
  struct pos ret;
  while (i != j) {
    if (arr[i] + arr[j] > x) {
      j--;
    }
    else if (arr[i] + arr[j] < x) {
      i++;
    }
    else {
      ret.p1 = i;
      ret.p2 = j;
      return ret;
    }
  }
  ret.p1 = -1;
  ret.p2 = -1;
  return ret;
}

int main()
{
  srand(time(NULL));
  int size = (rand() % 10) + 10;  
  int *arr = calloc(size + 1, sizeof(int));
  int needle = rand() % 100;
  fill_rand_arr(arr, size);
  print_arr(arr, size);
  struct pos ret = sum_of_ints(arr, size, needle);
  if (ret.p1 >= 0) {
    printf("We've got %d and %d that sum up to %d\n", arr[ret.p1], arr[ret.p2], needle);
  }
  else {
    printf("We don't have numbers that sum up to %d\n", needle);
  }
  return 0;
}
