#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int ang = 30;
	
	printf ("SENO DOS ANGULOS NOTAVEIS\n=========================\n");
	printf ("%d graus -> %.2f", ang, sin(ang));
	printf ("\n%d graus -> %.2f", ang + 15, sin(ang + 15));
	printf ("\n%d graus -> %.2f", ang + 30, sin(ang + 30));
	printf ("\n%d graus -> %.2f", ang + 60, sin(ang + 60));
	
	return 0;
}
