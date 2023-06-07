#include<stdio.h>

int main ()

{
	int digito_leido=0;//no se ha leido ningun numero 
	char car;
	while (!digito_leido)
	
	{
		printf("introduzca un caracter:");
		scanf("%c",&car);
		digito_leido=(('0'<=car)) && (('9'<=car));
		
	}
	
	return 0;
	}
