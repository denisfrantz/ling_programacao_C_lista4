#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double num;
	int i;
	
	printf ("ARREDONDAMENTO PARA CIMA\n========================\n");
	
	for (i = 0; i < 10; i++)
	{
		scanf ("%lf", &num);
		printf ("=> %.2lf\n\n", ceil(num)); // fun��o de arredondamento para cima
	}
	
	return 0;
}
