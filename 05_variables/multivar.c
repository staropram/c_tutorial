#include <stdio.h>
int main(int argc, char **argv) {
	// we declare 3 variables with the names t_c1, t_c2, and t_c3 and give
	// them the values 55, 100, and 222.4 respectively
	double t_c1 = 55, t_c2 = 100, t_c3 = 222.4;
	// we declare another 4 variables but assign no values to them
	double cfac, t_f1, t_f2, t_f3;

	// the cfac (conversion factor) is given the value 9.0/5.0
	cfac = 9.0/5.0;

	// three computations are now performed to convert t_c1, t_c2, and t_c3 to farenheit
	// the result of the computations are stored in the variables t_f1, t_f2, and t_f3 respectively
	t_f1 = t_c1 * cfac + 32;
	t_f2 = t_c2 * cfac + 32;
	t_f3 = t_c3 * cfac + 32;

	// we print out some information about the conversions
	printf("cfac: %f\n",cfac);
	printf("%f celcius is %f farenheit\n",t_c1,t_f1);
	printf("%f celcius is %f farenheit\n",t_c2,t_f2);
	printf("%f celcius is %f farenheit\n",t_c3,t_f3);

	return 0;
}
