#ifndef EVG_MAT
#define EVG_MAT

#define RAND_BOUND 1000

/* struct for the real-valued matrix */
struct matrix {
  unsigned rows;
  unsigned cols;
  double **vals;
};

/* standart typedef for those kinds of things */
typedef struct matrix t_mat;

/* create a new 0-filled matrix with a given number of rows and columns */
t_mat* make_matrix(unsigned rows, unsigned columns);

/* print the given matrix */
void print_matrix(t_mat* m);

/* fill a given matrix with some random values */
void fill_random_matrix(t_mat* m);

/* fill matrix from array  */
void fill_matrix_from_array(t_mat* m, double *arr);

/* multiply two matrices and return the result  */
t_mat* mult_matrix(t_mat* m1, t_mat* m2);

#endif
