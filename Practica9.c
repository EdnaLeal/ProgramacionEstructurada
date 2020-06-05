/* Edna Aisleen Leal Carrizales 1913447 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int semes, dia, mes;
	char nombre[20], apellido[20], facu[40], genero, carrera[30], op;
	long matricula, anio;

	do
	{
		printf ("\nIngrese el primer nombre del alumno: ");
		fflush (stdin);
		gets (nombre);
		
		
		printf ("\nIngrese el primer apellido del alumno: ");
		fflush (stdin);
		gets (apellido);
		
		
		do
		{
			printf ("\nIngrese el genero del alumno: M o F: ");
	    	fflush (stdin);
		    scanf ("%c", &genero);	
			if (genero!='M'&& genero!='F')
				puts("\nEl genero es M= Masculino F= Femenino\n");
		}while (genero!='M'&& genero!='F');
		
		
		do
		{
			printf ("\nIngrese el dia de cumplea%cos del alumno: ", 164);
			fflush (stdin);
			scanf ("%d", &dia);
			if (dia<=1 || dia>31)
				puts ("\nEl dia tiene que estar entre 1 y 31\n");
		}while (dia<=1 || dia>31);
		
		
		do
		{
		   printf("\nIngrese su mes de cumplea%cos: ", 164);
			scanf("%d/%d/%d",&mes);
			if(mes<=1 || mes>12)
				printf("\nEl mes tiene que estar entre 1 y 12\n");	
		}while(mes<=1 || mes>12);
		
		do
		{
		printf("\nIngrese el a%co de nacimiento: ", 164);
		scanf("%ld", &anio);
			if(anio<=0 || anio>2020)
				printf("\nEl mes tiene que ser mayor a 0 y menor a 2021\n");	
		}while(anio<=0 || anio>2020);

			
		do
		{
			printf ("\nIngrese la matricula del alumno: ");
			fflush (stdin);
			scanf ("%ld", &matricula);	
			if (matricula<=0 )
				puts ("\nLa matricula tiene que ser mayor a 0\n");		
		}while (matricula<=0);
		
		
		printf ("\nIngrese el nombre de la facultad del alumno:\n");
		fflush (stdin);
		gets (facu);
		
		
		printf ("\nIngrese el nombre de la carrera que estudia el alumno:\n");
		fflush (stdin);
		gets (carrera);
		
		do
		{
		printf ("\nIngrese el semestre que cursa el alumno: ");
		fflush (stdin);
		scanf ("%ld", &semes);	
		if (semes<=0 )
			puts ("\nEl semestre tiene que ser mayor a 0\n");		
		}while (semes<=0);
		
		
		printf ("\n\tNombre: %s %s", nombre, apellido);
		printf ("\n\tFecha de nacimiento: %d/%d/%ld", dia, mes, anio);
		printf ("\n\tMatricula: %ld", matricula);
		printf ("\n\tFacultad: %s", facu);
		printf ("\n\tCarrera: %s", carrera);
		printf ("\n\tSemestre: %d", semes);

	    
		do
		{
			puts ("\n\n\nOprima C para continuar y T para terminar: ");
			op = getche();
			
		}while (op!='C' && op!='T');
			
	}while (op=='C');
	
	printf ("\n\n\n"); 	
	system ("pause");

	return 0;
}
