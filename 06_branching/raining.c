#include <stdio.h>
int main() {
	int raining = 1;
	int has_umbrella = 1;

	if(!raining || has_umbrella) {
		printf("go out\n");
	} else {
		printf("stay in\n");
	}

	if(raining) {
		if(has_umbrella) {
			printf("go_out\n");
		} else {
			printf("stay in\n");
		}
	} else {
		printf("go out\n");
	}

	return 0;
}
