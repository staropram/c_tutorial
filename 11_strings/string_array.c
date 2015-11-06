#include <stdio.h>
#include <string.h>
int main() {
	char *string_array[5] = {
		"Hello",
		" my",
		" name",
		" is",
		" Ashley!\n"
	};

	for(int i=0; i<5; i++) {
		printf("%s",string_array[i]);
	}

	return 0;
}
