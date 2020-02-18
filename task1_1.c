#include   <stdio.h>



int main()

{



	short test_short_var=1;

	int test_int_var=1;

	long test_long_var=1;

	float test_float_var=1;

	double test_double_var=1;

	long double test_l_double_var=1;



	int result;



	    printf("%ld short\n", sizeof(test_short_var) ); 
	
printf("%ld int\n", sizeof(test_int_var) );
	
printf("%ld long\n", sizeof(test_long_var) );
	printf("%ld float\n", sizeof(test_float_var) ); 

	printf("%ld double\n", sizeof(test_double_var) ); 

	printf("%ld long double\n", sizeof(test_l_double_var) ); 





	return 0;

}
