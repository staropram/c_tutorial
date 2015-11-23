#include <stdio.h>

// an easier way to refer to a structure that doesn't require copious use
// of the struct keyword is to typedef it using the syntax
// typedef struct {content} name;
typedef struct {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} pixel;

// notice how the function definition is easier to read than in the
// case when we use the struct keyword
void print_pixel(pixel p) {
	printf("%u %u %u\n",p.r,p.g,p.b);
}

int main() {

	// now we can declare a struct without using the struct keyword
	pixel p;
	p.r = 0;
	p.g = 255;
	p.b = 0;

	printf("sizeof(pixel): %lu\n",sizeof(pixel));
	print_pixel(p);

	return 0;
}
