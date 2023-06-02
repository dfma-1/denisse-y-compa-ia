//mfcs
//02-06-23

#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es mayor que cero.\n");
    } else if (numero < 0) {
        printf("El número es menor que cero.\n");
    } else {
        printf("El número es igual a cero.\n");
    }

    return 0;
}
