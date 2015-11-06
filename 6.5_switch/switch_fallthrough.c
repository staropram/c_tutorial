#include <stdio.h>
int main() {

	printf("Enter a character: ");
	int c = getc(stdin);
	printf("\n");

	switch(c) {
		case 'a':
			puts("Stuff for a");

		case 'b':
			puts("Stuff for b");
		break;

		default:
			puts("Stuff for everything else");
		break;
	}

	return 0;
}
