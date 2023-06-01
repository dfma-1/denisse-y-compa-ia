#include <stdio.h>

int main() {
    int dividendo, divisor;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        if (dividendo % divisor == 0) {
            printf("El número es divisible.\n");
        } else {
            printf("El número no es divisible.\n");
        }
    } else {
        printf("Error: el divisor no puede ser cero.\n");
    }

    return 0;
}
