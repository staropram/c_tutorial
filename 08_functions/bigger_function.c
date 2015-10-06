#include <stdio.h>

void range_print(int start_i, int end_i) {
	printf("entering range_print\n");
	while( start_i <= end_i ) {
		printf("%d\n",start_i);
		start_i++;
	}
	printf("exiting range_print\n");
}

int main() {
	range_print(1,3);
	range_print(1,3);
	range_print(1,3);

	return 0;
}
