#include <stdlib.h>
#include <stdio.h>
int main() {
	// a_size is the size of the dynamic array to create
	int a_size = 10;
	// a is an integer pointer initialised to NULl
	int *a = NULL;

	// allocate enough memory for a_size integers
	a = malloc(a_size * sizeof(int));

	// if the return from malloc is NULL, an error
	// occurred, print an error message and exit
	if(a == NULL) {
		fprintf(stderr,"Error allocating memory!\n");
		exit(1);
	}

	// otherwise, populate the array with some values
	for(int i=0; i<a_size; i++) {
		a[i] = i*10;
	}

	// and print them
	for(int i=0; i<a_size; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}

	// before returning we free the previously allocated
	// integer pointer a
	free(a);

	return 0;
}
