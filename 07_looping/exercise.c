#include <stdio.h>

// the exercise posed in the last session was to read a number in
// using only getc, the answer is to call getc successively and then
// compute the difference between the ascii character read in
// and the character '0' to get a digit
int main() {
	int number = 0;
	char c = 0;

	printf("Please enter a digit between 0 and 99: ");

	c = getc(stdin);
	if(c<'0' || c >'9') {
		printf("Invalid number!\n");
		return 1;
	}

	number += (c-'0');

	c = getc(stdin);
	if(c=='\n') {
		printf("Got %d\n",number);
		return 0;
	}

	if(c<'0' || c >'9') {
		printf("Invalid number!\n");
		return 1;
	}

	number *= 10;
	number += (c-'0');

	c = getc(stdin);
	if(c!='\n') {
		printf("Invalid number!\n");
		return 1;
	}

	printf("Got %d\n",number);

	return 0;
}
