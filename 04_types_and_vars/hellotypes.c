#include <stdio.h>
#include <sys/limits.h>
#include <math.h>
#include <float.h>
int main(int argc, char **argv) {
	// character type
	printf("char:\n");
	printf("   bits: %d (CHAR_BIT)\n",CHAR_BIT);
	printf("   signed min,max: %d,%d (SCHAR_MIN,SCHAR_MAX)\n",SCHAR_MIN,SCHAR_MAX);
	printf("   unsigned min,max: %d,%d (0,UCHAR_MAX)\n",0,UCHAR_MAX);

	// short type
	puts("\nshort:");
	printf("   signed min,max: %d,%d (SHRT_MIN,SHRT_MAX)\n",SHRT_MIN,SHRT_MAX);
	printf("   unsigned min,max: %d,%d (0,USHRT_MAX)\n",0,USHRT_MAX);

	// int type
	puts("\nint type");
   printf("   signed min,max %d %d (INT_MIN,INT_MAX)\n",INT_MIN,INT_MAX);
   printf("   unsigned min,max %d %u (0,UINT_MAX)\n",0,UINT_MAX);

	// long type
	puts("\nlong type");
	printf("   signed long min,max %ld %ld (LONG_MIN,LONG_MAX)\n",LONG_MIN,LONG_MAX);
	printf("   unsigned long min,max %lu %lu (0ul,ULONG_MAX)\n",0ul,ULONG_MAX);

	// long long type
	puts("\nlong long type");
	printf("   signed long long min,max %lld %lld (LLONG_MIN,LLONG_MAX)\n",LLONG_MIN,LLONG_MAX);
	printf("   unsigned long long min,max %llu %llu (0ull,ULLONG_MAX)\n",0ull,ULLONG_MAX);

	// float
	puts("\nfloat:");
	printf("   min,max %e %e (FLT_MIN,FLT_MAX)\n",FLT_MIN,FLT_MAX);
	
	// double
	puts("\ndouble:");
	printf("   min,max %e %e (DBL_MIN,DBL_MAX)\n",DBL_MIN,DBL_MAX);

	// long double
	puts("\nlong double:");
	printf("   min,max %Le %Le (LDBL_MIN,LDBL_MAX)\n",LDBL_MIN,LDBL_MAX);

	// integers
	printf("\nintegers (int) type\n");
	printf("\nConversions of the number \"%d\"\n",12345);
	printf("Use %%pd, to specify a field width p. Examples:\n\n");
	// the number before the decimal point in the format modifier
	// specifies the field width, the number will be padded with
	// spaces to meet the field width
	printf("If the field width is less than the number of digits\n");
	printf("then the modifier has no effect: Examples:\n\n");
	printf("\t%%1d:  \"%1d\"\n",12345);
	printf("\t%%2d:  \"%2d\"\n",12345);
	printf("\t%%3d:  \"%3d\"\n",12345);
	printf("\t%%4d:  \"%4d\"\n",12345);
	printf("\t%%5d:  \"%5d\"\n",12345);
	printf("\nBut as soon as it is bigger, the number is padded with spaces: Examples:\n\n");
	printf("\t%%6d:  \"%6d\"\n",12345);
	printf("\t%%7d:  \"%7d\"\n",12345);
	printf("\t%%8d:  \"%8d\"\n",12345);
	printf("\t%%9d:  \"%9d\"\n",12345);
	printf("\t%%10d: \"%10d\"\n",12345);
	printf("\t%%20d: \"%20d\"\n",12345);
	printf("\t%%30d: \"%30d\"\n",12345);

	// to pad with zeros to the field width use %.pd where p is the width
	printf("To pad with zeros to the field width use %%.pd where p is the field width. Examples:\n\n");
	printf("If the field width is less than the number of digits\n");
	printf("then the modifier has no effect: Examples:\n\n");
	printf("\t%%.1d: \"%.1d\"\n",12345);
	printf("\t%%.2d: \"%.2d\"\n",12345);
	printf("\t%%.3d: \"%.3d\"\n",12345);
	printf("\t%%.4d: \"%.4d\"\n",12345);
	printf("\t%%.5d: \"%.5d\"\n",12345);

	printf("\nBut as soon as it is bigger, the number is padded with zeros: Examples:\n\n");
	printf("\t%%.6d:  \"%.6d\"\n",12345);
	printf("\t%%.7d:  \"%.7d\"\n",12345);
	printf("\t%%.8d:  \"%.8d\"\n",12345);
	printf("\t%%.9d:  \"%.9d\"\n",12345);
	printf("\t%%.10d: \"%.10d\"\n",12345);

	printf("\nThe two can be combined to pad the number with spaces and zeros\n");
	printf("such that %%p.Pd will pad to width P in zeros and p in spaces\n");
	printf("note that p must be > P for this to have any effect. Examples:\n\n");
	printf("\t%%10.10d:  \"%10.10d\"\n",12345);
	printf("\t%%11.10d:  \"%11.10d\"\n",12345);
	printf("\t%%12.10d:  \"%12.10d\"\n",12345);
	printf("\t%%13.10d:  \"%13.10d\"\n",12345);
	printf("\t%%14.10d:  \"%14.10d\"\n",12345);
	printf("\t%%15.10d:  \"%15.10d\"\n",12345);

	// floating point precision example
	printf("\nConversions of the number \"%f\"\n",M_PI);
	// note that %% prints '%' so in the following the last use
	// of % is the format specifier
	printf("Use %%.pf to set floating point precision p. Examples:\n\n");
	printf("\t%%f:    %f\n",M_PI);
	printf("\t%%.1f:  %.1f\n",M_PI);
	printf("\t%%.2f:  %.2f\n",M_PI);
	printf("\t%%.3f:  %.3f\n",M_PI);
	printf("\t%%.4f:  %.4f\n",M_PI);
	printf("\t%%.5f:  %.5f\n",M_PI);
	printf("\t%%.10f: %.10f\n",M_PI);
	printf("\t%%.20f: %.20f\n",M_PI);
	printf("\t%%.30f: %.30f\n",M_PI);

	printf("\nAgain this can be padded with spaces, examples:\n");
	printf("Note that it only takes affect with the modifier >7 since there are 7 digits\n\n");
	printf("\t%%7.5f:   \"%7.5f\"\n",M_PI);
	printf("\t%%8.5f:   \"%8.5f\"\n",M_PI);
	printf("\t%%9.5f:   \"%9.5f\"\n",M_PI);
	printf("\t%%10.5f:  \"%10.5f\"\n",M_PI);

	// chars
	printf("a: %c\n",97);
	printf("b: %c\n",98);
	printf("c: %c\n",100);

	// pointer
	int x = 3;
	printf("&x: %p\n",&x);
	
	// hex
	printf("255 hex: %x\n",255);
	printf("255 prefixed hex: %#x\n",255);
	printf("85 hex: %#x\n",85);

	// literal
	printf("%%\n");
}
