#include<stdio.h>
/*hacer un programa en lenguaje c que visualice 
la tarifa de luz segun el gasto de corriente electrica
para un gasto menor a 1000 es 1.2, entre 1000 y 1850 
el gasto va ser de 1.8 y si es mayor de 1850 el gasto va a ser 2.1*/

int main() {
	
	float gasto;
	float tarifa;
	
	printf("ingrese la cantidad de el primer gasto");
	scanf("%f",&gasto);
	
	if (gasto < 1000) {
		tarifa=1.2;
	} else if (gasto>= 1000 && gasto<=1850) {
		tarifa=1.8;
		} else {
			tarifa=2.1;
	}
	
	printf("La tarifa de luz para un gasto de %.2f es %.2f\n", gasto, tarifa);
	
	return 0;
}

