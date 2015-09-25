#include <stdio.h>
int main() {
	// a basic forloop that loops from 1 to 10
	for(int i=1; i<11; i++) {
		printf("%d\n",i);
	}

	// you can also nest forloops
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
		   printf("i,j: %d,%d\n",i,j);
		}
	}

	return 0;
}
