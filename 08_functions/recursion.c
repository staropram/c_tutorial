#include <stdio.h>

void countdown(int x) {
	printf("entering countdown\n");
	if( x <= 0 ) {
		return;
	}

	printf("%d\n",x);
	countdown(x-1);
	printf("exiting countdown\n");
}

int main() {
	countdown(5);

	return 0;
}
