#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

/* typedef struct matrix { */
/*   int rows; */
/*   int cols; */
/*   double **vals */
/* } t_mat; */

t_mat* make_matrix(unsigned rows, unsigned columns) {
  t_mat *ret = malloc(sizeof(t_mat));
  if (ret == NULL) {
    return NULL;
  }
  ret->vals = calloc(sizeof(double*), rows);
  if (ret->vals == NULL) {
    free(ret);
    return NULL;
  }
  ret->rows = rows;
  ret->cols = columns;
  for (unsigned i = 0; i < rows; i++) {
    ret->vals[i] = calloc(sizeof(double), columns);
    if (ret->vals[i] == NULL) {
      for (unsigned j = 0; j < i; j++) {
	free(ret->vals[j]);
      }
      free(ret->vals);
      free(ret);
      return NULL;
    }
  }
  return ret;
}

void delete_matrix(t_mat* m) {
  for (unsigned j = 0; j < m->rows; j++) {
    free(m->vals[j]);
  }
  free(m->vals);
  free(m);
}

/* Take a guess on what this function's doing */
void print_matrix(t_mat* m) {
  if (!m)
    return;
  for (unsigned i = 0; i < m->rows; i++) {
      for (unsigned j = 0; j < m->cols; j++) {
	printf("%-4.2g ", m->vals[i][j]);
      }
      printf("\n");
  }
}

void fill_random_matrix(t_mat* m) {
  for (unsigned i = 0; i < m->rows; i++) {
    for (unsigned j = 0; j < m->cols; j++) {
      m->vals[i][j] = ((double) (rand() % RAND_BOUND) - RAND_BOUND / 2) / 10;
    }
  }
}

void fill_matrix_from_array(t_mat* m, double *arr) {
  for (unsigned i = 0; i < m->rows; i++) {
    for (unsigned j = 0; j < m->cols; j++) {
      m->vals[i][j] = arr[i * m->cols + j];
    }
  }
}

t_mat* mult_matrix(t_mat* m1, t_mat* m2) {
  if (m1->cols != m2->rows) {
    return NULL;
  }
  t_mat *ret = make_matrix(m1->rows, m2->cols);
  if (ret == NULL)
    return ret;
  for (unsigned i = 0; i < ret->rows; i++) {
    for (unsigned j = 0; j < ret->cols; j++) {
      double nv = 0;
      for (unsigned k = 0; k < ret->rows; k++) {
	nv += m1->vals[i][k] * m2->vals[k][j];
      }
      ret->vals[i][j] = nv;
    }
  }
  return ret;
}

