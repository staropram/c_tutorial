#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int (*special_function)(int,int);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

typedef struct {
	char *function_name;
	special_function f;
} function_map_type;

#define NUM_FUNCTIONS 3
function_map_type function_map[NUM_FUNCTIONS] = {
	{"add",add},
	{"sub",sub},
	{"mul",mul}
};

special_function get_function(char *s) {
	for(int i=0; i<NUM_FUNCTIONS; i++) {
		if(strcmp(s,function_map[i].function_name)==0) {
			return function_map[i].f;
		}
	}
	return NULL;
}

int main(int argc, char **argv) {
	if(argc!=4) {
		printf("USAGE\n\tfunction_caller f arg1 arg2\n");
		exit(1);
	}

	special_function f = get_function(argv[1]);
	if(f==NULL) {
		printf("Invalid function!\n");
		exit(1);
	}
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	printf("a: %d, b: %d, %s(a,b): %d\n",
		a,b,argv[1],f(a,b));

	return 0;
}
