#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include "algo.h"

void test_mat() {
  t_mat *m1 = make_matrix(2, 2);
  double t1[] = {0.0, 1.0,
		 2.0, 0.0};
  fill_matrix_from_array(m1, t1);
  print_matrix(m1);
  t_mat *m2 = make_matrix(2, 3);
  double t2[] = {1.0, 2.0, 3.0,
		 4.0, 5.0, 6.0};
  fill_matrix_from_array(m2, t2);
  print_matrix(m2);
  t_mat *res = mult_matrix(m1, m2);
  print_matrix(res);
  /* char *k = {1, 2, 3}; */
}

int main() {
  prepare_random();
  test_mat();
  return 0;
}
