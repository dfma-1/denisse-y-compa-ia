#include<stdio.h>
 int MiNumero;
 int main()
 
 {
 /*variable al principio de la funcion main*/
 int j;
 printf("¿cual es su numero favorito?");
 scanf("d",&MiNumero);
 int numerodeinteracciones=5;
 int i;
 for(i=2; i<=2* numerodeinteracciones; i+=2 ){
 	printf("interaccion numero: %d\n",i);
 	
 }
 printf("cuanto vale aqui la variabñe i: %d\n",i);
 printf("cuanto vale aqui la variable MiNumero; %d\n", MiNumero);
 printf("cuanto vale aqui la variable numerodeinteracciones: %d\n",numerodeinteracciones);
 
 return 0;
}
