#include <stdio.h>

// the function fib takes a single integer
// argument x which specifies the index into
// the fibonacci sequence to print up to
void fib(int x) {
	// a and b will always store the last two
	// fibonacci numbers, c stores the next
	int a = 0, b = 1, c = 0;

	// for non-sensible x values, just return
	if(x<=0) {
		return;
	}

	// explicitly print out the fibonacci numbers
	// for cases x==1 and x==2
	if(x==1) {
		printf("%d\n",a);
		return;
	} else if(x==2) {
		printf("%d %d\n",a,b);
		return;
	}

	// for all other values, print the first two
	// numbers
	printf("%d %d ",a,b);

	// and then print the rest
	for(int i=3; i<=x; i++) {
		// compute the "next" fibonacci number
		// which is the sum of the two previous
		c = a + b;
		// print it out
		printf("%d ",c);

		// setup the "two previous" fibonacci
		// numbers so that next time around the
		// loop, the computation makes sense
		a = b;
		b = c;
	}
	// print a newline to finish
	printf("\n");

}

int main() {
	// call fib with the numbers [1,10]
	for(int i=1; i<=10; i++) {
		fib(i);
	}

	return 0;
}
