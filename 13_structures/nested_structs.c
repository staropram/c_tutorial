#include <stdio.h>
#include <stdlib.h>

// we will have a pixel type within a screen type
typedef struct {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} pixel;

// the screen type has a width, height, and some pixels
typedef struct {
	int width;
	int height;
	pixel *data;
} screen;

/**
 * Creates a pointer to new screen structure having width * height space for pixels.
 *
 * The data is filled with pixels whose red value is the row index and whose 
 * green value is the column index.
 *
 * @param width The width of the screen in pixels.
 * @param height The height of the screen in pixels.
 *
 * @return Pointer to a malloced screen structure.
 */
screen* screen_new(int width, int height) {

	// allocate memory for screen structure
	screen *s = malloc(sizeof(screen));
	s->width = width;
	s->height = height;
	// allocate space for pixels
	s->data = malloc(width*height*sizeof(pixel));
	// populate pixels with something
	for(int i=0; i<s->height; i++) {
		for(int j=0; j<s->width; j++) {
			int index = i*s->width+j;
			s->data[index].r = i;
			s->data[index].g = j;
			s->data[index].b = 0;
		}
	}

	return s;
}

// frees an existing screen structure, note that
// the nested pixel data is freed first, then the structure itself
void screen_free(screen *s) {
	free(s->data);
	free(s);
}

// prints a screen pointer from a pointer
void screen_print(screen *s) {
	for(int i=0; i<s->height; i++) {
		for(int j=0; j<s->width; j++) {
			int index = i*s->width+j;
			printf("(%u,%u,%u) ",
				s->data[index].r,
				s->data[index].g,
				s->data[index].b
			);
		}
		printf("\n");
	}
}

int main() {
	// create a new screen structure, print it, and free it
	screen *s = screen_new(5,5);
	screen_print(s);
	screen_free(s);
	return 0;
}
