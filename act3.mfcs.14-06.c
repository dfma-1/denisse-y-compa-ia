//ejercicio3 mfcs 14

#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    printf("Ingrese un número (-1 para finalizar): ");
    scanf("%d", &numero);

    while (numero != -1) {
        suma += numero;

        printf("Ingrese un número (-1 para finalizar): ");
        scanf("%d", &numero);
    }

    printf("La suma de los números ingresados es: %d\n", suma);

    return 0;
}
