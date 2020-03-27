/* Edna Leal 1913447 */

#include <stdio.h>
#include<stdbool.h>

int main()
{
	int max, NumEvaluar, div, res, indice;
	bool Numeros[100], EsDivisible;
	
	printf("Numero maximo:\n");
	scanf("%d", &max);
	for(indice=0; indice<max; indice++)
	{
		//Es primo
		NumEvaluar = indice + 1;
		res = 1;
		EsDivisible = res == 0;
		div=2;
		
		while(div<NumEvaluar && EsDivisible == false)
		{
			res = NumEvaluar % div;
			//printf("p?:%d n:%d r:%d \n", NumEvaluar, div, res);
			EsDivisible = res == 0;
			div++;
		}
		//printf("Es primo? %d\n", EsDivisible);
		Numeros[indice] =! EsDivisible;
	}
	
	printf("\nResultado\n");
	for(indice=0; indice<max; indice++)
	{
		NumEvaluar = indice + 1;
		printf("Numero: %d es primo: %d\n", NumEvaluar, Numeros[indice]);
	}
}
