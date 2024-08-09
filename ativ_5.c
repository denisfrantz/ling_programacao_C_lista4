#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	
	printf ("\nMULTIPLICA\x80\xc7O POR 2: %d", num << 1); // deslocamento de bits à esquerda
	printf ("\nDIVIS\xc7O POR 2: %d", num >> 1); // deslocamento de bits à direita
	
	return 0;
}
