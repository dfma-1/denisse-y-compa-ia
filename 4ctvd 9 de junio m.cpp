#include<stdio.h>

int main ()

{

char opcion;
 
do
{
	puts("hola");
	puts("Desea otro tipo de saludo");
	printf("y acontinuacion pulse intro ");
	scanf("%c",&opcion);


}	while (opcion == 's');
	

		puts("adios");
	
	return 0;
	
}
