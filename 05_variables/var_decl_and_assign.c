#include <stdio.h>
int main(int argc, char **argv) {
	// we declare the variable x and assign the value 5.2
	double x = 5.2;
	// in the next 4 lines we change the value of x 4 times
	x = 2.2;
	x = 343.2;
	x = 23134.2;
	x = 3343.2;
	// finally we pass the variable x as an argument to printf
	// to print it
	printf("%f\n",x);

	return 0;
}
