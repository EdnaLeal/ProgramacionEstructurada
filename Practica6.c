#include <stdio.h>
#include <stdlib.h>

/*Edna Leal, 1913447*/

int main()
{
	int i=0, cont=-1;
	float prom=0, sum=0;
	
	do
	{
		sum=sum+i;
		cont++;
		printf ("Ingresar un numero: \n");
		scanf ("%d", &i);
	}while(i>=0);
		if(cont==0)
		{
			cont=1;
		}
		prom = sum/cont;
		printf ("El promedio de los numeros ingresados es: %.2f \n", prom);
	system ("pause");
	return 0;
}

