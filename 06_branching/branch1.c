#include <stdio.h>
int main() {
	int x = 1;

	if(x) {
		printf("x is true\n");
	} else {
		printf("x is not true\n");
	}

	x = 0;

	if(x) {
		printf("x is true\n");
	} else {
		printf("x is not true\n");
	}

	x = 1;

	if(x == 5) {
		printf("x is 5\n");
	} else {
		printf("x is not 5\n");
	}

	x = 5;

	if(x == 5) {
		printf("x is 5\n");
	} else {
		printf("x is not 5\n");
	}

	return 0;
}
