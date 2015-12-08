#include <stdio.h>
int main() {
	// create a file and write some numbers to it
	FILE *f = fopen("temp.txt","w");
	fprintf(f,"55 33 22\n");
	fclose(f);

	// open the file again
	f = fopen("temp.txt","r");
	int a=0,b=0,c=0;
	int matched_items = 0;
	// and use fscanf to read those numbers back in
	// into the variables a,b,c provided
	matched_items = fscanf(f,"%d %d %d\n",&a,&b,&c);

	// print out how many items were matched
	printf("fscanf matched %d items\n",
		matched_items
	);

	// and print those items
	printf("%d %d %d\n",a,b,c);

	fclose(f);


	return 0;
}
