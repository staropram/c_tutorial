#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
	char *a = malloc(6*sizeof(char));
	printf("%p\n",a);
	strncpy(a,"hello",5);
	printf("%p\n",a);
	a[5] = '\0';
	
	puts(a);

	return 0;
}
