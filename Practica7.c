/*	Edna Leal, 1913447 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int base, multi, n, i;
	
	printf ("Ingresar un numero para utilizar de base \n");
	scanf ("%d", &base);
	printf ("Ingresar el numero de multiplos a generar \n");
	scanf ("%d", &n);
	printf ("Los multiplos gererados de la base %d son: \n", base);
	for (i=0; i<n; i++)
	{
		multi = base * i;
		printf ("%d \n", multi);
	}
	system ("pause");
	return 0;
}
