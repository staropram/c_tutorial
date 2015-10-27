#include <stdlib.h>
#include <stdio.h>

/**
 * Function to print an integer array.
 *
 * @param b The array to print.
 * @param b_size The size of the array
 */
void print_int_array(int *b, int b_size) {
	for(int i=0; i<b_size; i++) {
		printf("[%d]: %d\n",i,b[i]);
	}
}

/**
 * Function to create an integer array of specified
 * length.
 *
 * @param length The length of the array to create.
 *
 * @return An integer array (integer pointer).
 */
int* create_int_array(int length) {
	// allocate the memory for the array
	int *a = malloc(length*sizeof(int));
	// deal with error case
	if(a==NULL) {
		return a;
	}
	// populate the array elements
	for(int i=0; i<length; i++) {
		a[i] = i*1000;
	}
	// return it
	return a;
}

/**
 * Function which doubles the values of an integer 
 * array. The array will be modified in-place.
 *
 * @param a The integer array to modify.
 * @param a_size The size of the integer array.
 */
void double_int_array(int *a, int a_size) {
	for(int i=0; i<a_size; i++) {
		a[i] *= 2;
	}
}

int main() {
	// create an integer array of size 10
	int a_size = 10;
	int* a = create_int_array(a_size);

	// print it
	print_int_array(a,a_size);

	// call the function to double the element values
	printf("Doubling array\n");
	double_int_array(a,a_size);

	// print the array again to check that the values
	// have changed
	print_int_array(a,a_size);

	// free the array before returning
	free(a);
	return 0;
}
