#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int base, exp, resultado;
	
	printf ("POTENCIA\x80\xc7O\n===========\n");
	printf ("Base: ");
	scanf ("%d", &base);
	printf ("Expoente: ");
	scanf ("%d", &exp);
	
	resultado = pow(base,exp);
	
	printf ("\n-> %d^%d = %d", base, exp, resultado);
	
	return 0;
}
