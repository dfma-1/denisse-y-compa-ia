/*programa numero
titulo
fecha 
nombre:Miriam alvarez */

#include<stdio.h>
int MiNumero;
int main ()

{
	/*varibles al principop de la funcion main*/
	int j;
	printf(  "¿cual es su numero favorito?");
	scanf("%d",&MiNumero);
	int numerodeInteracciones=5;
	int i;
	for(i=2; i<=2* numerodeInteracciones; i+=2 ){
		printf("interaccion numero: %d\n",i);
		
	}
	printf("cuanto vale aqui la varible i: %d\n",i);
	printf("cuanto vale aqui la varible MiNumero:%\n",MiNumero);
	printf("cuanto vale aqui la variable numerodeInteraccines: %d\n",numerodeInteracciones);
	
	return 0;
	
}
