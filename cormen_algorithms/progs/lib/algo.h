#ifndef EVG_ALGO
#define EVG_ALGO

/* puts a millisecond seed in a srand */
void prepare_random();

/* Fills first size values of given array with random values from 0 to 100 */ 
void fill_rand_arr(int *arr, int size);

/* Prints given array */
void print_arr(int *arr, int size);

/* merge sorts an array */
void merge_sort(int *arr, int size);

/* bubble sorts an array */
void bubble_sort(int *arr, int size);

/* get time from epoch in ms */
unsigned long get_time_ms();

/* checks whether or not given array is sorted in ascending order */
int is_sorted(int *arr, int size);

/* Insertion sort of a given array */
void insertion_sort(int *arr, int size);


#endif
