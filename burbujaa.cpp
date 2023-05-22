#include <windows.h>
#include<stdio.h>
 
int main ()
{
	int i,j,aux,c,vector[c];
	i=1;
	j=1;
	aux=0;
	printf("Escribe la cantidad de numeros que se te de la gana: ");
		scanf("%i",&c);
	printf("Escribe tu numeros: \n");
	for (i=1;i<=c;i++){
	printf("%i numero: ",i);
	scanf("%i",&vector[i]);
    }
 
    for(i=1;i<=c;i++){
    	for(j=1;j<=c;j++){
    		if(vector[j]>vector[j+1]){
    			aux=vector[j];
    			vector[j]=vector[j+1];
    			vector[j+1]=aux;
			}
		}
 
	}
		printf("\n Numeros de manera ordenada: \n");
   for (i=1;i<=c;i++){
	printf("%i|",vector[i]);
    }
    return 0;
