/*determinar si un numero dado, leido del teclado
es primo o no es primo repitiendo la operacion un numero de veces determinado
por otro numero asignado por el teclado*/

#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0; // No es primo
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int main() {
    int num;
    int repeticiones;

    printf("ingrese un numero: ");
    scanf("%d", &num);

    printf("ingrese el numero de repeticiones: ");
    scanf("%d", &repeticiones);

    for (int i = 0; i < repeticiones; i++) {
        if (esPrimo(num)) {
            printf("%d es un numero primo\n", num);
        } else {
            printf("%d no es un numero primo\n", num);
        }
    }

    return 0;
}

