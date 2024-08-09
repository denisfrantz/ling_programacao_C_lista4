#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1, num2, soma;
	
	printf ("SOMADOR\n=======\n");
	printf ("1o numero: ");
	scanf ("%d", &num1);
	printf ("2o numero: ");
	scanf ("%d", &num2);
	
	soma = num1 + num2;
	
	printf ("\nSoma: %-10d", soma);
	
	return 0;
}
