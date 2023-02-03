#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "algo.h"

void m_bubble_sort(int *arr, int size)
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

int main()
{
  srand(time(NULL));
  int size = (rand() % 10) + 10;  
  int *arr = calloc(size + 1, sizeof(int));
  fill_rand_arr(arr, size);
  print_arr(arr, size);
  m_bubble_sort(arr, size);
  print_arr(arr, size);
}
