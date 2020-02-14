#include <stdio.h>

int main(){
	char c;
	printf("Ingresar un caracter: ");
	c = getchar();
	int a = (int) c;
	if(48<=a && a<=57){
	 printf("El caracter es un numero entero: ");
	}else{
		if(65<=a && a<=90){
		  printf("El caracter es una letra mayuscula: ");
	    }else{
	    	if(97<=a && a<=122){
	    	  printf("El caracter es una letra minuscula: ");
			}else{
				printf("El caracter es un simbolo: ");
		    }
		}
	}
putchar (c);
printf ("\n");
return (0);
}
