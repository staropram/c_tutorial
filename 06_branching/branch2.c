#include <stdio.h>
#include <stdbool.h>
int main() {
	bool a = 1, b = 1, c = 1;

	if(a && b && c) {
		printf("a, b, and c are all true\n");
	} else {
		printf("At least one of a, b, or c is false\n");
	}

	a = 0; 

	if(a && b && c) {
		printf("a, b, and c are all true\n");
	} else {
		printf("At least one of a, b, or c is false\n");
	}


	return 0;
}
