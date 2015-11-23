#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} pixel;

// this function takes a pointer to a pixel and changes it's
// red value to 255
void make_redder(pixel *p) {
	// the -> operator is used to dereference the pointer and
	// change the actual value of the passed structure, hence 
	// changes here will be reflected upon return
	p->r = 255;
}

// this function takes a pointer to a pixel and a length
// the pointer assumed to be the beginning of an area of
// memory with sequential pixels stored (i.e an array of pixels)
// all pixels in the array have their red value changed to 255
void make_screen_redder(pixel *s, int len) {
	for(int i=0; i<len; i++) {
		s[i].r = 255;
	}
}

int main() {

	// create a single pixel
	pixel p = {0,255,0};
	// print it
	printf("%u %u %u\n",p.r,p.g,p.b);
	// change it, and then print it
	make_redder(&p);
	printf("%u %u %u\n",p.r,p.g,p.b);

	// create an array of 10 pixels
	pixel *screen = malloc(10*sizeof(pixel));
	// set each of their r,g,b values to 0
	for(int i=0; i<10; i++) {
		screen[i].r = 0;
		screen[i].g = 0;
		screen[i].b = 0;
	}

	// print the array
	printf("before: ");
	for(int i=0; i<10; i++) {
		printf("%u ",screen[i].r);
	}
	printf("\n");
	// call the function which "reddens" the pixels
	make_screen_redder(screen,10);
	// and print the result
	printf("after: ");
	for(int i=0; i<10; i++) {
		printf("%u ",screen[i].r);
	}
	printf("\n");

	free(screen);
	return 0;
}
