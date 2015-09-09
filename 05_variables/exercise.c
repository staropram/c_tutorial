#include <stdio.h>
int main(int argc, char **argv) {
	// printf is a special type of function whose arguments are not
	// typed, and therefore no implicit type conversion is performed
	// thus, the correct type must always be used otherwise the wrong
	// thing happens:
	printf("Printing floating point as decimal: %d\n",3.14);
	printf("Printing decimal as float: %f\n",3);

	// to avoid this, explicitly cast the arguments for conversion
	// note that the (int) cast below will round 3.14 down to 3
	printf("Printing floating point as decimal: %d\n",(int)3.14);
	printf("Printing decimal as float: %f\n",(double)3);
	printf("Printing decimal as float: %f\n",3.0);

	return 0;
}
