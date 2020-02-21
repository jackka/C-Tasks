#include <stdio.h>

#define in 100
#define x0 1


int main(int argc, char const *argv[])
{

double x = 5;
double xn = x0;
double xp;
double e = 0.1;

while ( ( xp - xn ) < e )   {
	xp = xn;
	xn = (xn + x / xn) / 2;
	printf("%.10g\n", xn); 
}


return 0;
}
