#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "algo.h"

void merge(int *arr, int start, int mid, int end)
{
  int nl = mid - start + 1;
  int nr = end - mid;
  int *l = calloc(sizeof(int), nl);
  int *r = calloc(sizeof(int), nr);
  memcpy(l, arr + start, sizeof(int) * nl);
  memcpy(r, arr + mid + 1, sizeof(int) * nr);
  int i = 0;
  int j = 0;
  int k = start;
  while (i < nl && j < nr) {
    if (l[i] <= r[j]) {
      arr[k] = l[i];
      i++;
    }
    else {
      arr[k] = r[j];
      j++;
    }
    k++;
  }

  while (i < nl) {
    arr[k] = l[i];
    i++;
    k++;
  }
  while(j < nr) {
    arr[k] = r[j];
    j++;
    k++;
  }
  free(l);
  free(r);
}

void i_merge_sort(int *arr, int start, int end)
{
  if (start >= end)
    return;
  int q = (start + end)/2;
  i_merge_sort(arr, start, q);
  i_merge_sort(arr, q + 1, end);
  merge(arr, start, q, end);
}

void merge_sort(int *arr, int size)
{
  i_merge_sort(arr, 0, size - 1);
}

int main()
{
  srand(time(NULL));
  int size = (rand() % 10) + 10;  
  int *arr = calloc(size + 1, sizeof(int));
  fill_rand_arr(arr, size);
  print_arr(arr, size);
  merge_sort(arr, size);
  print_arr(arr, size);
}
