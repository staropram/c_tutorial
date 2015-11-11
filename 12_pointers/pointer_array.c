#include <stdio.h>
#include <stdlib.h>
int main() {
	// we create an array of integers (an integer pointer)
	int *a = malloc(3*sizeof(int));
	// and assign some values
	a[0] = 33;
	a[1] = 66;
	a[2] = 99;

	// print the size of an int
	printf("sizeof(int): %d\n",sizeof(int));

	// we print the consecutive addresses and observe
	// that they are the base address plus multiples
	// of the size of an int
	printf("&a[0]: %lu\n",&a[0]);
	printf("&a[1]: %lu\n",&a[1]);
	printf("&a[2]: %lu\n",&a[2]);

	// we can do address or pointer arithmetic by
	// adding to a pointer, and the size of the pointer
	// type is added on rather than the numerical value
	printf("a: %lu\n",a);
	printf("(a+1): %lu\n",a+1);
	printf("(a+2): %lu\n",a+2);

	// we can dereference pointers upon which pointer
	// arithmetic has been performed
	printf("*a: %d\n",*a);
	printf("*(a+1): %d\n",*(a+1));
	printf("*(a+2): %d\n",*(a+2));

	// for good hygeine we free the array
	free(a);
	return 0;
}
