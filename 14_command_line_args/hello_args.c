#include <stdio.h>
int main(int argc, char **argv) {
	// this program just print the number of command line arguments
	printf("argc: %d\n",argc);
	// and then prints the arguments themselves
	for(int i=0; i<argc; i++) {
		printf("arg %d: \"%s\"\n",i,argv[i]);
	}
	return 0;
}
