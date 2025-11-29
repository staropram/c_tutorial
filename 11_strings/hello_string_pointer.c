#include <stdio.h>
int main() {
	char *a = "hello";
	char b[] = "hello";

	printf("a: \"%s\"\n",a);
	printf("b: \"%s\"\n",b);
	b[0] = 'b';
	printf("b: \"%s\"\n",b);
	//a[0] = 'c'; this will not work because a is read only
	printf("a: \"%s\"\n",a);

	return 0;
}
