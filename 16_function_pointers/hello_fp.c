#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main() {
	printf("add(3,4) %d\n",add(3,4));

	typedef int (*addition_func)(int, int);

	addition_func plus = add;

	printf("plus(3,4) %d\n",plus(3,4));


	return 0;
}
