/*elabora un prpgrama que identifiqu 10 elemetos que lso muestre, realice la suma ,he idenjtifique el mayor de ellos */

#include <stdio.h>

int main() {
    int elementos[10];
    int i, suma = 0, mayor;

    // Entrada de elementos
    printf("Ingresa 10 elementos:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &elementos[i]);
    }

    // Mostrar elementos
    printf("\nLos elementos ingresados son:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", elementos[i]);
    }

    // Calcular suma
    for (i = 0; i < 10; i++) {
        suma += elementos[i];
    }
    printf("\nLa suma de los elementos es: %d\n", suma);

    // Encontrar el mayor elemento
    mayor = elementos[0];
    for (i = 1; i < 10; i++) {
        if (elementos[i] > mayor) {
            mayor = elementos[i];
        }
    }
    printf("El mayor elemento es: %d\n", mayor);

    return 0;
}

