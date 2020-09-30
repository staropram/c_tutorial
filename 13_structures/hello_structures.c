#include <stdio.h>

// struct format is 
// struct name {content};
// note that the structure is declared globally in this file because 
// we need to use it throughout
// in this case our structure is designed to store rgb color values
struct pixel {
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

// observe that the function arguments require the struct keyword
void print_pixel(struct pixel p) {
	printf("%u %u %u\n",p.r,p.g,p.b);
	// p is only a copy of the structure local to the function
	// so changing it won't affect
	// the value after we return from the function
	p.r = 128;
	printf("%u %u %u\n",p.r,p.g,p.b);
}

int main() {

	// declare structure p
	struct pixel p;
	p.r = 0;
	p.g = 255;
	p.b = 0;

	// we can print the size of a structure
	printf("sizeof(p): %lu\n",sizeof(struct pixel));

	// printing the structure before and after to show
	// that the structure passed to print_pixel is a
	// copy, and modifying it in the function doesn't
	// modify it here
  	printf("\nCalling print_pixel\n");
	print_pixel(p);
	printf("\nDone calling print_pixel\n");
	
	printf("%u %u %u\n",p.r,p.g,p.b);


	return 0;
}
