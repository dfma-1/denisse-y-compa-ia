/*determinar si un numero dado leido del teclado es primo o no ,
repitiendo la operacion un numero de veces determinado por 
otro numero asignado por teclado (b repetir numero de veces controlado por centinela 
y controlar el numero de repeticiones por bandera)*/
#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0;  // No es primo
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // No es primo
        }
    }

    return 1;  // Es primo
}

int main() {
    int numero, repeticiones;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("Ingrese el número de repeticiones: ");
    scanf("%d", &repeticiones);

    while (repeticiones > 0) {
        printf("%d %s primo.\n", numero, esPrimo(numero) ? "es" : "no es");
        repeticiones--;
    }

    return 0;
}
