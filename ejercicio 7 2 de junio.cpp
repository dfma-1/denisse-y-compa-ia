#include<stdio.h>

int main (){
	
	int numero;
	
	printf("ingrese un numero :");
	scanf("%d",&numero);
	
	if (numero >0){
		printf("el numero es positivo.\n");
	} else if (numero <0){
		printf("el numero es negativo.\n");
	} else {
		printf ("el numero es igual a cero.\n");
	}
	
	return 0;
	
}





