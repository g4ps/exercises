#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "algo.h"


int main()
{
  const int size = 1000000;
  const int total_arrays = 3;
  const char *str_sorts[3] =
    {
     "merge",
     "insertion",
     "bubble",
    };
  srand(time(NULL));
  int *arrs[3];
  unsigned long int times[6][2];
  for (int i = 0; i < total_arrays; i++) {
    arrs[i] = calloc(size + 1, sizeof(int));
  }
  if (total_arrays > 0) {
    fill_rand_arr(arrs[0], size);
    for (int i = 1; i < total_arrays; i++) {
      memcpy(arrs[i], arrs[0], sizeof(int) * size);
    }
  }
  for (int i = 0; i < 3; i++) {
      times[i][0] = get_time_ms();
      if (i == 0) {
	merge_sort(arrs[i], size);
      }
      else if (i == 1) {
	/* insertion_sort(arrs[i], size); */
      }
      else {
	/* bubble_sort(arrs[i], size); */
      }
      times[i][1] = get_time_ms();
      if (!is_sorted(arrs[i], size)) {
	printf("We haven't sorted nothing on %s\n", str_sorts[i]);
	/* return 1; */
      }
      else {
	printf("%-10s sort finished with the time of %u\n", str_sorts[i],
	       times[i][1] - times[i][0]);
      }
  }
  return 0;
}
