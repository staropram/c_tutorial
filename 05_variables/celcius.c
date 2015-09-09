#include <stdio.h>
int main(int argc, char **argv) {
	// first we declare a variable t_c and assign the value 55 to it
	double t_c = 55;
	// we declare a variable t_f without assigning a value to it
	double t_f;

	// the arithmetical expression below computes the value of t_c in farenheit
	// and stores the value in the variable t_f
	t_f = t_c * 9/5 + 32;

	// we now print the values before and after conversion
	printf("%f celcius is %f farenheit\n",t_c,t_f);

	return 0;
}
