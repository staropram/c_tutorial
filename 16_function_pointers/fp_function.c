#include <stdio.h>

typedef int (*pair_function)(int,int);

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

double muld(double a, double b) {
	return a * b;
}

void blend(int *a, int *b, int len, pair_function f) {
	for(int i=0; i<len; i++) {
		printf("%d: %d\n",i,f(a[i],b[i]));
	}
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {5,6,7,8,9};

	printf("add:\n");
	blend(a,b,5,add);
	printf("sub:\n");
	blend(a,b,5,sub);
	printf("mul:\n");
	blend(a,b,5,mul);

	printf("muld:\n");
	blend(a,b,5,muld);

	return 0;
}
