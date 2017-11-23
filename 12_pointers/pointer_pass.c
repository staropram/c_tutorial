#include <stdlib.h>
#include <stdio.h>

// this function is supposed to re-allocate the array
// passed to it to have size 6 but doesn't work
// because p is just a copy of the address passed to it
// and the realloc then assigns to the local variable p
// which only has scope within the function "f_broken"
void f_broken(int *p) {
	printf("p: %lu\n",p);
	p = realloc(p,6*1024*1024*sizeof(int));
	printf("p: %lu\n",p);
}

// this function successfully reallocates the array passed
// to it, by de-referencing the pointer to an integer pointer
// in order to change the value of the integer pointer itself
// rather than the address p that is passed
void f_working(int **p) {
	printf("*p: %lu\n",*p);
	*p = realloc(*p,6*1024*1024*sizeof(int));
	printf("*p: %lu\n",*p);
}

int main() {
	// assume we create an array of integers having size 3
	int *a = malloc(3*sizeof(int));

	// we try and change the size of a, using the broken function
	printf("a before f_broken: %lu\n",a);
	f_broken(a);
	printf("a after f_broken: %lu\n",a);

	// and now successfully using the working function
	printf("a before f_working %lu\n",a);
	f_working(&a);
	printf("a after f_working: %lu\n",a);

	return 0;
}
