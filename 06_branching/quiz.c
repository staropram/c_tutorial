#include <stdio.h>
int main() {
	char c;
	int correct_answer_count = 0;

	printf("What is the capital of the UK?\n");
	printf("\ta - London\n");
	printf("\tb - Paris\n");
	printf("\tc - Washington\n");
	c = getc(stdin);
	getc(stdin);

	if(c=='a') {
		correct_answer_count++;
	}

	printf("What is the capital of France?\n");
	printf("\ta - London\n");
	printf("\tb - Paris\n");
	printf("\tc - Washington\n");
	c = getc(stdin);
	getc(stdin);

	if(c=='b') {
		correct_answer_count++;
	}

	printf("What is the capital of the USA?\n");
	printf("\ta - London\n");
	printf("\tb - Paris\n");
	printf("\tc - Washington\n");
	c = getc(stdin);
	getc(stdin);

	if(c=='c') {
		correct_answer_count++;
	}

	if(correct_answer_count==3) {
		printf("Cool you got em all!\n");
	} else if(correct_answer_count==2) {
		printf("2 out of 3 aint bad!\n");
	} else if(correct_answer_count==1) {
		printf("1 out 3! Needs improving\n");
	} else {
		printf("Terrible, 0 out of 3\n");
	}

	return 0;
}
