/* Edna Aisleen Leal Carrizales 1913447 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j,k,sn;
	struct stud
	{
		int semes;
		char matricula[20],nombre[30],apellido[20],fecha[20],facu[20],carrera[30],genero[10];
	} est[100];
	FILE *fp;
	fp=fopen("estudiantes.txt","w+");
	fprintf(fp,"\"Students\":\[\n");
	// Lectura
	do
	{
		printf("\nEstudiante %d",i+1);
		printf("\nMatricula: ");
		fflush(stdin);
		gets(est[i].matricula);
		printf("\nNombre: ");
		gets(est[i].nombre);
		printf("\nApellido: ");
		gets(est[i].apellido);
		printf("\nFecha de nacimiento: ");
		gets(est[i].fecha);
		printf("\nEscuela: ");
		gets(est[i].facu);
		printf("\nSemestre: ");
		scanf("%d",&est[i].semes);
		printf("\nCarrera: ");
		fflush(stdin);
		gets(est[i].carrera);
		printf("\nGenero: ");
		gets(est[i].genero);
		fprintf(fp,"\{\"Matricula\": %d, ",est[i].matricula);
		fprintf(fp,"\"Nombre\": %s, ",est[i].nombre);
		fprintf(fp,"\"Apellido\": %s, ",est[i].apellido);
		fprintf(fp,"\"Fecha de nacimiento\": %s, ",est[i].fecha);
		fprintf(fp,"\"Escuela\": %s, ",est[i].facu);
		fprintf(fp,"\"Semestre\": %d, ",est[i].semes);
		fprintf(fp,"\"Carrera\": %s, ",est[i].carrera);
		fprintf(fp,"\"Genero\": %s\n",est[i].genero);
		i++;
		do
		{
			printf("\n Desea introducir mas datos?\n 1) Si\n 2) No\n");
		scanf("%d",&sn);
		}while(sn!=1&&sn!=2);
	}while(sn==1);
	printf("\n\nMatricula\tNombre\t\tApellido\tFecha de nacimiento\tEscuela\t\tGrado\tCarrera\t\tGenero");
	// Impresión
	for(j=0;j<i;j++)
	{
		for(k=0;k<j;k++)
			if(strcmp(est[k].matricula,est[j].matricula)==0)
				break;
		if(k==j)
			printf("\n%-7s\t\t%-9s\t%-11s\t%-11s\t\t%-11s\t%-6d\t%-9s\t%s",est[j].matricula,est[j].nombre,
			est[j].apellido,est[j].fecha,est[j].facu,est[j].semes,est[j].carrera,est[j].genero);
	}
	printf("\nPresione cualquier tecla para continuar... ");
	fflush(stdin);
	fprintf(fp,")");
	fclose(fp);
	getchar();
	return 0;	
}
