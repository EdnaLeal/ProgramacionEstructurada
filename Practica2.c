//Práctica 2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 int main()
{
	
	//Operaciones enteras
	int a=2, b=3, c;
    c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
	c = a * b;
	printf ("%d * %d = %d\n", a, b, c);
	c = a / b;
	printf ("%d / %d = %d\n", a, b, c);
	c = a % b;
	printf ("%d %% %d = %d\n", a, b, c);
	++c;
	printf ("++%d = %d\n", c);
	--c;
	printf ("--%d= %d\n", c);
	
	//Operaciones flotantes
	
	float x= 1.5, y= 3.1, z;
	z = x + y;
	printf ("%f + %f = %f\n", x, y, z);
	z = x - y;
	printf ("%f - %f = %f\n", x, y, z);
	z = x * y;
	printf ("%f * %f = %f\n", x, y, z);
	z = x / y;
	printf ("%f / %f = %f\n", x, y, z);
	z = x > y;
	printf ("%f > %f = %f\n", x, y, z);
	z = x < y;
	printf ("%f < %f = %f\n", x, y, z);
	z = x == y;
	printf ("%f == %f = %f\n", x, y, z);
	z = x >= y;
	printf ("%f >= %f = %f\n", x, y, z);
	z = x <= y;
	printf ("%f <= %f = %f\n", x, y, z);
	
	//Operaciones booleanas
	
	int i=6, j=10, k=14;
    bool h;
	h = i > k & j < k;
	printf ("%d > %d & %d < %d = %d\n", i, k, j, k, h);
	h = j == i || i < k;
	printf ("%d == %d || %d < %d = %d\n", j, i, i, k, h);
	h = j == k;
	printf ("%d == %d = %d\n", j, k, h);
	
	system ("pause");
	return 0;
}
