#include <stdio.h>
#include <stdlib.h>
int main()
{
	int id = 1, boi, id_menor, id_maior;
	float peso, peso_total, maior = 0, menor = 1000;
	
	printf ("FRIGORIFICO\n===========\n");
	
	do
	{
		printf ("No de identificacao: ");
		scanf ("%d", &id);
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		if (peso > maior)
		{
			maior = peso;
			id_maior = id;
		}
		if (peso < maior)
		{
			menor = peso;
			id_menor = id;
		}
		
		boi++;
		peso_total = peso_total + peso;
		
	} while (id != 0);
	
	printf ("\nBoi mais gordo\nID: %d\nPeso: %.2f Kg\n", id_maior, maior);
	printf ("\nBoi mais magro\nID: %d\nPeso: %.2f Kg", id_menor, menor);
	printf ("\n\nPeso medio dos bois: %.2f Kg", peso_total/(boi-1));
	
	return 0;
}
