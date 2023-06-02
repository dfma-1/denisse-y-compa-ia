/*
2.- desarrolle un programa en c que diga si un numero es mayor,
menor o igual a 0 con la funcion si simple */

#include <stdio.h>

int main() {
    int num1;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    if (num1 > 0) {
        printf("El numero es mayor a 0 :)\n");
    }

    if (num1 < 0) {
        printf("El numero es menor a :(\n");
    }

    if (num1 == 0) {
        printf("El numero es igual a 0 :D\n");
    }

    return 0;
}


