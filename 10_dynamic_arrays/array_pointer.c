#include <stdlib.h>
#include <stdio.h>

/**
 * Function to create an integer array.
 *
 * @param len The length of the array to create
 * @param multiplier The value to multiply the
 * array index by in initial assignment of values.
 *
 * @return An integer array (integer pointer).
 */
int* create_int_array(int len, int multiplier) {
	// allocate memory for the integer array
	int *a = malloc(len*sizeof(int));
	
	// populate it according to the multiplier
	for(int i=0; i<len; i++) {
		a[i] = i*multiplier;
	}

	// return the address
	return a;
}

int main() {
	// we will create three integer arrays of array_len
	int array_len = 10;
	// create the three arrays using the function
	// above, using different multipliers so we can
	// tell them apart when we print them
	int *a = create_int_array(array_len,10);
	int *b = create_int_array(array_len,100);
	int *c = create_int_array(array_len,1000);

	// create space to store pointers to these
	// arrays (pointers to integer pointers)
	int** array_pointer = malloc(3*sizeof(int*));
	// and store the addresses of the three arrays
	// in this array
	array_pointer[0] = a;
	array_pointer[1] = b;
	array_pointer[2] = c;

	// we can now print out the elements of this
	// "matrix" by iterating indexing into array_pointer
	for(int i=0; i<3; i++) {
		for(int j=0; j<array_len; j++) {
			printf("array_pointer[%d][%d]: %d\n",i,j,
				array_pointer[i][j]);
		}
	}

	// to free the memory we first need to free
	// array_pointer and then we need to free
	// the three individual arrays
	free(array_pointer);
	free(a);
	free(b);
	free(c);

	return 0;
}
