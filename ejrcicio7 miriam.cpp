#include<stdio.h>

int main (){
	
	int numero;
	
	printf("ingrese un numero :");
	scanf("%d",&numero);
	
	if (numero >0){ 
	++numero;
		printf("el numero es positivo incremento +1: %d\n",numero);
	} else if (numero <0){
		numero--;
		printf("el numero es negativo decremento -1: %d\n",numero);
	} else {
		int contador =0;
		contador += 10;
		printf ("el numero es igual a cero el contador incrememta +10: %d\n",contador );
	}
	
	return 0;
	
}





