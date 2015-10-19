#include <stdio.h>
int main() {
	// we can make a 2 dimensional array by using
	// two sets of square brackets to specify the dimensions
	double a[3][3];
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			a[i][j] = i*j;
		}
	}

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			printf("a[%d][%d]: %f\n",i,j,a[i][j]);
		}
	}

	// similarly we can make a 3 dimensional array
	double b[3][3][3];
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(int k=0; k<3; k++) {
				b[i][j][k] = i*j*k;
			}
		}
	}

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(int k=0; k<3; k++) {
				printf("b[%d][%d][%d]: %f\n",i,j,k,b[i][j][k]);
			}
		}
	}

	return 0;
}
