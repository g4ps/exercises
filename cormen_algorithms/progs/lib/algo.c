#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>

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

void bubble_sort(int *arr, int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = size - 1; j > i; j--) {
      if (arr[j] < arr[j - 1]) {
	temp = arr[j];
	arr[j] = arr[j - 1];
	arr[j - 1] = temp;
      }
    }
  }
}

void insertion_sort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    /* int j = i - i; */
    int j;
    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
      arr[j + 1] = arr[j];      
    }
    arr[j + 1] = key;
  }
}

unsigned long get_time_ms() 
{
  struct timeval t;
  gettimeofday(&t, NULL);
  return t.tv_sec * 1000 + t.tv_usec / 1000;
}

int is_sorted(int *arr, int size)
{
  for (int i = 1; i < size; i++) {
    if (arr[i] < arr[i - 1]) {
      return 0;
    }
  }
  return 1;
}

void prepare_random() {
  srand(get_time_ms());
}
