#include <stdio.h>


// takes integer x and returns the double of it
int d(int x) {
	return x*2;
}

int main() {
	printf("%d\n",d(5));
	printf("%d\n",d(10));
	printf("%d\n",d(20));

	int p = d(25);

	printf("%d\n",p);

	return 0;
}
