#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int num, num_abs;
	
	printf ("Insira um inteiro negativo: ");
	scanf ("%d", &num);
	
	num_abs = fabs(num);
	
	printf ("\nO valor absoluto de %d e %d", num, num_abs);
	
	return 0;
}
