#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double num, num_abs;
	
	printf ("Insira um DOUBLE: ");
	scanf ("%lf", &num);
	
	num_abs = fabs(num);

	printf ("\nO valor absoluto de %.2lf \x82 %lf", num, num_abs);
	
	return 0;
}
