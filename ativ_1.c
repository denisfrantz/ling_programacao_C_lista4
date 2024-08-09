#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num1, num2, soma;
	
	printf ("SOMADOR\n=======\n");
	printf ("1o numero: ");
	scanf ("%f", &num1);
	printf ("2o numero: ");
	scanf ("%f", &num2);
	
	soma = num1 + num2;
	
	printf ("\nSoma: %.2f", soma); 
	
	return 0;
}
