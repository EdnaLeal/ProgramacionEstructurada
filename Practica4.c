#include <stdio.h>

int main ()
{
	float num1, num2, res;
	char op;
	
	printf ("Calculadora Basica \n");
	printf ("Ingrese el primer numero; \n");
	scanf ("%f",&num1);
	printf ("Ingrese el segundo numero: \n");
	scanf ("%f",&num2);
	printf ("Ingrese una operacion: \n");
	fflush (stdin);
	scanf ("%c",&op);
	
	switch (op)
	{
		case'+':
			res = num1 + num2;
			printf("%.2f %c %.2f = %.2f", num1, op, num2, res);
			break;
		case '-':
			res = num1 - num2;
			printf("%.2f %c %.2f = %.2f", num1, op, num2, res);
			break;
		case '*':
			res = num1 * num2;
			printf("%.2f %c %.2f = %.2f", num1, op, num2, res);
			break;
		case '/':
			res = num1 / num2;
			printf("%.2f %c %.2f = %.2f", num1, op, num2, res);
			break;
		default:
		printf ("Operacion Invalida");
	}
	
	return 0;
}
