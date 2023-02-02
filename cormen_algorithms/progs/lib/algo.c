#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


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


void ii_merge(int *arr, int start, int mid, int end)
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

void ii_merge_sort(int *arr, int start, int end)
{
  if (start >= end)
    return;
  int q = (start + end)/2;
  ii_merge_sort(arr, start, q);
  ii_merge_sort(arr, q + 1, end);
  ii_merge(arr, start, q, end);
}

void merge_sort(int *arr, int size)
{
  ii_merge_sort(arr, 0, size - 1);
}
