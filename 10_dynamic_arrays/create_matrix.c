#include <stdlib.h>
#include <stdio.h>

/**
 * Function to create an integer matrix.
 * @param nrows Number of rows the matrix has.
 * @param ncols Number of columns the matrix has.
 *
 * @return An integer matrix (pointer to integer pointer).
 */
int** create_int_matrix(int nrows, int ncols) {
	// first of all allocate space for the rows
	// each entry is the size of an integer pointer
	int **m = malloc(nrows*sizeof(int*));
	// for each row, allocate space for the columns
	// each entry is the size of an integer
	for(int i=0; i<nrows; i++) {
		m[i] = malloc(ncols*sizeof(int));
	}
	return m;
}

/**
 * Function to free an integer matrix.
 * @param m The matrix to free.
 * @param nrows Number of rows the matrix has.
 */
void free_int_matrix(int **m, int nrows) {
	for(int i=0; i<nrows; i++) {
		free(m[i]);
	}
	free(m);
}

/**
 * Function to print an integer matrix.
 * @param m The matrix to print.
 * @param nrows Number of rows the matrix has.
 * @param ncols Number of columns the matrix has.
 */
void print_int_matrix(int **m, int nrows, int ncols) {
	for(int i=0; i<nrows; i++) {
		for(int j=0; j<ncols; j++) {
			printf("%.2d ",m[i][j]);
		}
		printf("\n");
	}
}

int main() {
	// nrows and ncols store the number of rows and cols
	// of our matrix, respectively
	int nrows = 10;
	int ncols = 10;
	// allocte the integer matrix
	int **m = create_int_matrix(nrows,ncols);

	// populate the matrix such that row i and col j
	// take the value i*j
	for(int i=0; i<nrows; i++) {
		for(int j=0; j<ncols; j++) {
			m[i][j] = i*j;
		}
	}

	// print the matrix out
	print_int_matrix(m,nrows,ncols);

	// free the memory previously allocated to the 
	// matrix and return
	free_int_matrix(m,nrows);
	return 0;
}
