#include <stdio.h>
int main() {
	for(int i=0; i<10; i++) {
		if(i==2 || i==5) {
			continue;
		}

		if(i==9) {
			return 0;
		}

		printf("%d\n",i);

	}

	printf("outside for\n");

	return 0;
}
