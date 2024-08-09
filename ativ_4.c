#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tam, i;
	
	printf ("Tamamho max. do vetor ");
	scanf ("%d", &tam);
	
	double vetor[tam]; 
	
	system ("cls");
	
	printf ("VETOR DOUBLE (%d POSICOES)\n=========================\n", tam);
	for (i = 0; i < tam; i++)
		scanf ("%lf", &vetor[i]);
		
	system ("cls");
	
	printf ("VETOR DOUBLE (%d POSICOES)\n=========================\n", tam);
	for (i = 0; i < tam; i++)
		printf ("%lf ", vetor[i]);
	
	printf ("\n\nTamanho do vetor (em bytes): %d ", sizeof(vetor));
	
	return 0;
}
