#include <stdio.h>

typedef struct {
	unsigned int r;
	unsigned int g;
	unsigned int b;
} Pixel;

int main() {
	Pixel pixel_array[50];
	for(int i=0; i<50; i++) {
		pixel_array[i].r = 0;
		pixel_array[i].g = i;
		pixel_array[i].b = 0;
	}

	FILE *f = fopen("test2.bin","wb");
	size_t objects_written = fwrite(
		&pixel_array,
		sizeof(Pixel),
		50,
		f
	);
	fclose(f);

	Pixel pixel_array2[50];

	f = fopen("test2.bin","rb");
	objects_written = fread(
		&pixel_array2,
		sizeof(Pixel),
		50,
		f
	);
	fclose(f);
	printf("objects written: %ld\n\n",objects_written);

	for(int i=0; i<50; i++) {
		printf("%d: %d %d %d\n",
			i,
			pixel_array2[i].r,
			pixel_array2[i].g,
			pixel_array2[i].b
		);
	}

	return 0;
}
