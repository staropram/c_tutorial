#include <stdio.h>
int main() {
	char a[] = "hello world";

	char *ap = (char*)&a[0];
	char *bp = (char*)&a;
	char *cp = (char*)&a[6];

	printf("ap: \"%s\"\n",ap);
	printf("bp: \"%s\"\n",bp);
	printf("cp: \"%s\"\n",cp);

	a[5] = '\0';

	printf("ap: \"%s\"\n",ap);
	printf("bp: \"%s\"\n",bp);
	printf("cp: \"%s\"\n",cp);

	return 0;
}
