#include   <stdio.h>

int main(int argc, char const *argv[])
{

	short test_short_var=1;
	int test_int_var=1;
	long test_long_var=1;
	float test_float_var=1;
	double test_double_var=1;
	long double test_l_double_var=1;

	int result;

	while (test_short_var) { test_short_var <<= 1; result++; } printf("%d short\n", result); result = 0;
	while (test_int_var) { test_int_var <<= 1; result++; } printf("%d int\n", result); result = 0;
	while (test_long_var) { test_long_var <<= 1; result++; } printf("%d long\n", result); result = 0;
	printf("%ld float\n", sizeof(test_float_var) ); 
	printf("%ld double\n", sizeof(test_double_var) ); 
	printf("%ld long double\n", sizeof(test_l_double_var) ); 


	return 0;
}
