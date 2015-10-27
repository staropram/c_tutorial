#include <stdlib.h>
#include <stdio.h>
int main() {
	// a_size contains the initial array_size
	int a_size = 10;
	// new_a_size contains the size we will
	// reallocate a to
	int new_a_size = a_size*2;
	// tmp is an integer pointer used for temporary
	// storage
	int *tmp = NULL;

	// allocate memory for the integer array
	int *a = malloc(a_size*sizeof(int));

	// deal with the error case
	if(a==NULL) {
		fprintf(stderr,"Error allocating memory!\n");
		exit(1);
	}

	// populate the array with elements
	for(int i=0; i<a_size; i++) {
		a[i] = i*10;
	}

	// and print them
	for(int i=0; i<a_size; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}


	// reallocate the array a with the new size
	printf("Reallocating a!\n");
	// we use a temporary value before overwriting
	// a because the new address might be different
	// to the old address, or the call will return
	// NULL if there is an error
	tmp = realloc(a,new_a_size*sizeof(int));
	
	// deal with the error case
	if(tmp==NULL) {
		fprintf(stderr,"Error reallocting a!\n");
		exit(1);
	}
	printf("Done.\n");

	// assign the new address to the variable a
	// so that a points to the newly allocated memory
	a = tmp;

	// print out the new memory and observe that the
	// values upto the old size have been preserved
	for(int i=0; i<new_a_size; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}

	// free the memory associated with a before return
	free(a);

	return 0;
}
