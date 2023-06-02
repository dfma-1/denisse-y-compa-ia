//ver si es divisible o no es divisible con si no un numero cuando su reciduo sea 0 y utilixar un else 



#include <stdio.h>

int main() {
    int divisor, dividendo, cociente, residuo;

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);

    if (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;

        printf("Divisor: %d\n", divisor);
        printf("Dividendo: %d\n", dividendo);
        printf("Cociente: %d\n", cociente);
        printf("Residuo: %d\n", residuo);
    } else {
        printf("Error: El divisor no puede ser cero.\n");
    }

    return 0;
}
