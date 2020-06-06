/* Edna Aisleen Leal Carrizales 1913447 */

#include <stdio.h>
#include <stdlib.h>

struct fecha
{
	unsigned int dia, mes, anio;
};

struct alumno
{
	int semes;
	char nombre[20], apellido[20], facu[40], genero, carrera[30];
	long matricula;
	struct fecha cumple;
};

int main()
{
	char op;
	struct alumno estudiante;

	do
	{
		printf ("\nIngrese el primer nombre: ");
		fflush (stdin);
		gets (estudiante.nombre);
	
	
		printf ("\nIngrese el primer apellido: ");
		fflush (stdin);
		gets (estudiante.apellido);
	
	
		do
		{
			printf ("\nIngrese su dia de cumplea%cos: ", 164);
			scanf ("%d",&estudiante.cumple.dia);
			if (estudiante.cumple.dia<=0 || estudiante.cumple.dia>31)
				printf ("\nEl dia tiene que estar entre 1 y 31\n");
		}while (estudiante.cumple.dia<=0 || estudiante.cumple.dia>31);
	
	
		do
		{
		   printf ("\nIngrese su mes de cumplea%cos: ", 164);
			scanf ("%d",&estudiante.cumple.mes);
			if (estudiante.cumple.mes<=1 || estudiante.cumple.mes>12)
				printf ("\nEl mes tiene que estar entre 1 y 12\n");	
		}while (estudiante.cumple.mes<=1 || estudiante.cumple.mes>12);
	
	
		do
		{
		   printf ("\nIngrese su a%co de nacimiento: ", 164);
			scanf ("%d",&estudiante.cumple.anio);
			if (estudiante.cumple.anio>2020)
				printf ("\nEl mes tiene que ser mayor a 0 y menor a 2021\n");	
		}while (estudiante.cumple.anio>2020);
		
		
		do
		{
			printf ("\nIngrese la matricula del alumno: ");
		    scanf ("%ld", &estudiante.matricula);
		    if (estudiante.matricula<0)
		    	printf ("\nLa matricula debe ser mayor a 0\n");
		}while (estudiante.matricula<0);
		
		
		printf ("\nIngrese el nombre de la facultad del alumno:\n");
		fflush (stdin);
		gets (estudiante.facu);
	
	
		printf ("\nIngrese el nombre de la carrera que estudia el alumno:\n");
		fflush (stdin);
		gets (estudiante.carrera);
	
			
		do
		{
			printf ("\nIngrese el semestre que cursa el alumno: ");
			fflush (stdin);
			scanf ("%ld", &estudiante.semes);
			if (estudiante.semes<=0 )
				puts ("\nEl semestre tiene que ser mayor a 0\n");		
		}while (estudiante.semes<=0);
			
	
		printf ("\n\tNombre: %s %s", estudiante.nombre, estudiante.apellido);
		printf("\n\tFecha de nacimiento: %d/%d/%d",estudiante.cumple.dia,estudiante.cumple.mes,estudiante.cumple.anio);
		printf ("\n\tMatricula: %ld", estudiante.matricula);
		printf ("\n\tFacultad: %s", estudiante.facu);
		printf ("\n\tCarrera: %s", estudiante.carrera);
		printf ("\n\tSemestre: %d", estudiante.semes);
		
	
		do
		{
			puts ("\n\n\nOprima C para continuar y T para terminar: ");
			op = getche();
		}while (op!='C' && op!='T');
		
	}while (op=='C');
	
	printf("\n\n\n");
	system("pause");
	
	return 0;
}
