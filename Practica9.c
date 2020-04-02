/* Edna Leal, 1913447*/

#include <stdio.h>

int main()
{
	int i=0, j=0, num=0, mat[3][3];
	printf("Imprimir la matriz original y la multiplicada por un constante\n\n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("Ingresa un numero de la matriz:");
			scanf("%d", &mat[i][j]);
		}
	printf ("\n");
	}
	
	printf("\nIngrese el numero a multiplicar por la matriz: ");
	scanf("%d", &num);
	printf("\nLa matriz es: \n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ;  j<3 ; j++)
		{
			printf("%4d", mat[i][j]);
		}
	printf ("\n");
	}
	
	printf("La matriz multiplicada es:\n");
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf(" %3d ", mat[i][j]*num);
		}
	printf("\n");
	}
}
