#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main() {
	// name of the file and FILE structure
	const char *filename = "test.txt";
	FILE *f = NULL;

	// set error number to zero and call fopen
	errno = 0;
	f = fopen(filename,"a");

	// if the file is NULL, an error occurred
	if(f==NULL) {
		// print the error
		fprintf(stderr,"Error opening %s for writing, errno: %d\n",filename,errno);
		exit(1);
	}

	// otherwise use fprintf to print to the file
	fprintf(f,"Hello there!\n");

	// and close the file to finish
	fclose(f);


	return 0;
}
