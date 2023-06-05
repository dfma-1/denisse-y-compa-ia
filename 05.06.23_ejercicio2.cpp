/*
ejercicio 2: 
a)editar y depurar el ejercicio2 y 
b)describir la variante en el uso del case
*/

#include <stdio.h>

int main() {
    int opcion;
    printf("Ingrese un numero: ");
    scanf("%i", &opcion);

    switch (opcion) {
        case 0:
        case 1:
        case 2:
            printf("Menor de tres...\n");
            break;
        case 3:
            puts("Igual a tres");
            break;
        default:
            puts("Fuera de rango");
            break;
    }

    return 0;
}

