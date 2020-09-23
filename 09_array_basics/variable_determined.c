#include <stdio.h>
int main() {
	// the size of an array can also be determined by a variable in C99
	int array_size = 50;
	// note that it is not permitted to initialize the values
	// of the array using {a,b, ... } notation since the size
	// of the array is not known until runtime
	int a[array_size];

	// dynamic assignment to the array is of course still possible
	for(int i=0; i<array_size; i++) {
		a[i] = i*10;
	}

	for(int i=0; i<array_size; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
