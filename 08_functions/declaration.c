#include <stdio.h>

int d(int x);

int main() {
	printf("%d\n",d(5));

	return 0;
}

int d(int x) {
	return x*2;
}
