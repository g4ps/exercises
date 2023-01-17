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

void sort(int *arr, int size) {
  for (int i = i; i < size; i++) {
    int key = arr[i];
    /* int j = i - i; */
    int j;
    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
      arr[j + 1] = arr[j];      
    }
    arr[j + 1] = key;
  }
}

int main() {
  srand(time(NULL));
  int size = (rand() % 10) + 10;  
  int arr* = calloc(0, size + 1);
  fill_rand_arr(arr, size);
  print_arr(arr, size);
}
