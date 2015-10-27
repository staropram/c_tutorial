#include <stdlib.h>
#include <stdio.h>

void change_int_array(int *a, int a_size) {
	for(int i=0; i<a_size; i++) {
		a[i] = i*100;
	}
}

int main() {
	// statically allocate an integer array a
	int a[10];

	// get the address of the integer array and
	// store it in ap to create an integer pointer ap
	int *ap = (int*)&a;

	// call change_int_array to modify the array pointed
	// to by ap (i.e the array a)
	change_int_array(ap,10);

	// print out the values to check that it was changed
	for(int i=0; i<10; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}

	// there is nothing to free since a was statically
	// allocated
	return 0;
}
