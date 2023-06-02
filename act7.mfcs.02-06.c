//mfcs.02-06
//contador

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
    	++numero;
        printf("El numero %d es positivo.\n", numero);
    }
    if (numero < 0) {
    	numero--;
        printf("El numero %d es negativo.\n", numero);
    }
    if (numero = 0) {
    	int contador=0;
    	contador +=10;
        ("El numero %d es igual a cero.\n", contador);
    }

    return 0;
}