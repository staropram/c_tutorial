/**
 * A switch statement can be used as an alternative to a multi-case if-then-else sequence.
 * Or can be used to "fallthrough" from one
 * conditional block to another.
 */
#include <stdio.h>
int main() {
	printf("Enter a character: ");
	int c = getc(stdin);
	printf("\n");

	switch(c) {
		case 'a':
			printf("You entered a!\n");
		break;

		case 'b':
			printf("You entered b!\n");
		break;

		default:
			printf("Invalid character!\n");
		break;
	}

	// functionally equivalent to this
	if(c=='a') {
		printf("You entered a!\n");
	} else if(c=='b') {
		printf("You entered b!\n");
	} else {
		printf("Invalid character!\n");
	}
	
	return 0;
}
