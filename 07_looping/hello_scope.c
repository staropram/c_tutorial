#include <stdio.h>
int main() {
	int i = 33;
	int x = 33;

	for(int i=0; i<10; i++) {
		printf("inside i: %d\n",i);
		x = i;
	}

	printf("outside i: %d\n",i);
	printf("outside x: %d\n",x);

	return 0;
}
