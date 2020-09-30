#include <stdio.h>


int main() {
	// here we statically declare an integer array
	// with 5 elements and assign the values
	int a[5] = {50,60,70,80,90};

	// we can access the element values by indexing
	// the array from 0
	
	printf("Printing integer array \"a[]\"\n");
	
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	printf("%d\n",a[2]);
	printf("%d\n",a[3]);
	// notice that the last element is always the
	// array size minus one
	printf("%d\n",a[4]); 

	// we can also declare an array without 
	// assigning values
	int b[5];

	// in which case the values of the array will
	// be undefined and might have strange values:
	
	printf("\nPrinting integer array \"b[]\" before assigning values\n");
	
	for(int i=0; i<5; i++) {
		printf("%d\n",b[i]); 
	}

	// instead, we can assign the values at runtime
	for(int i=0; i<5; i++) {
		b[i] = 10*i;
	}
	
	printf("\nPrinting integer array \"b[]\" after assigning values\n");
	
	// which then looks like:
	for(int i=0; i<5; i++) {
		printf("%d\n",b[i]); 
	}

	return 0;
}
