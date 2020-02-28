#include <stdio.h>
#include <stdlib.h>
/* EdnaLeal , 1913447 */
int main()
{
	int i, cont=0;
	float prom, sum=0;
	printf ("Ingrese un numero: \n");
	scanf ("%d", &i);
	while (i>=0)
	{
		sum=sum+i;
		cont++;
		printf ("Ingresar un numero: \n");
		scanf ("%d", &i);
	}
	prom = sum/cont;
	printf ("El promedio de los numeros ingresados es: %.2f \n", prom);

	system ("pause");
	return 0;
}
