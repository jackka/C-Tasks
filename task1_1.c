#include   <stdio.h>

int main()
{
	short short_v;
	int int_v;
	long long_v;
	float float_v;
	double double_v;
	long double long_double_v;

	int result;

	printf("%ld short\n", sizeof(short_v)); 
        printf("%ld int\n", sizeof(int_v));
        printf("%ld long\n", sizeof(long_v));
	printf("%ld float\n", sizeof(float_v)); 
	printf("%ld double\n", sizeof(double_v)); 
	printf("%ld long double\n", sizeof(long_double_v)); 

	return 0;
}
