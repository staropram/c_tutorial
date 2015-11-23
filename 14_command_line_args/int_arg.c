#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>

// this program takes a single integer argument and 
// performs all checks to assure it really is an integer
int main(int argc, char **argv) {
	if(argc!=2) {
		printf("USAGE\n\tint_arg number\n");
		exit(1);
	}

	char *endptr = NULL;
	// before calling the conversion function errno is set to zero
	errno = 0;
	// the function strtol returns a long given a string
	long x = strtol(
		argv[1],
		&endptr,
		10
	);

	// if an error occurred, errno will be non-zero
	if(*endptr!=0 || errno) {
		if(errno==EINVAL) {
			printf("No conversion could be performed!\n");
			exit(1);
		} else if(errno==ERANGE) {
			printf("Conversion out of range!\n");
			exit(1);
		}
		printf("Error occured at: %s\n",endptr);
		exit(1);
	}

	// check that the number doesn't exceed the integer maximum
	if(x>INT_MAX) {
		printf("INT_MAX: %d\n",INT_MAX);
		printf("Passed value %ld is too big for an int!\n",x);
		exit(1);
	}

	// or is less than the integer minimum
	if(x<INT_MIN) {
		printf("INT_MIN: %d\n",INT_MIN);
		printf("Passed value %ld is too small for an int!\n",x);
		exit(1);
	}

	printf("Successful, x is: %d\n",(int)x);

	return 0;
}
