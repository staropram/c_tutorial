#include <stdio.h>
#include <stdlib.h>
int main() {
	// we create an integer variable a
	int a = 101;
	// and take the address of it to get an integer pointer
	int *ap = &a;
	// and take the address of that to get 
	// a pointer to an integer pointer
	int **app = &ap;
	// and take the address of that to get
	// a pointer to a pointer to an integer pointer
	int ***appp = &app;

	// we can print the variable directly
	printf("a: %d\n",a);
	// or by dereferencing the integer pointer once
	printf("*ap: %d\n",*ap);
	// ... or the pointer to the integer pointer twice
	printf("**app: %d\n",**app);
	// ... or the pointer to the pointer to the integer pointer three
	// times
	printf("***app: %d\n",***appp);
}
