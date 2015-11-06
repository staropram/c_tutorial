#include <stdio.h>
#include <string.h>
int main() {
	char a[] = "Humpty dumpty sat on a wall";
	char search_char = 'u';
	char replace_char = 'o';
	char *ap = (char*)&a[0];

	printf("Before: %s\n",a);

	while( (ap=strchr(ap,search_char)) != NULL) {
		ap[0] = replace_char;
	}

	printf("After: %s\n",a);

	return 0;
}
