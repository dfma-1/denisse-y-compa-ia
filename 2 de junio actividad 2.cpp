//desarrole un programa que diga si un numero es mayor menor o igual a cero  con la funcion si simple //

#include<stdio.h>

int main (){
	
	int numero;
	
	printf("ingrese un numero :");
	scanf("%d",&numero);
	
	if (numero >0){
		printf("el numero es mayor que cero.\n");
	} else if (numero <0){
		printf("el numero es menor a cero.\n");
	} else {
		printf ("el numero es igual a cero.\n");
	}
	
	return 0;
	
}





