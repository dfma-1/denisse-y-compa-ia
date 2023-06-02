/*
hacer un programa en lenguaje c que calcule el mayor de 
dos numeros leidos desde el teclado 
y visualizarlos utilizando el si simple con float*/

#include <stdio.h>

int main() {
    float n1, n2;

    printf("Ingrese el primer numero: ");
    scanf("%f", &n1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        puts("El numero mayor es:");
        printf("%.2f\n", n1);
    }
    if (n2 > n1) {
        puts("El numero mayor es:");
        printf("%.2f\n", n2);
    }

    return 0;
}

