//ejercicio2 mfcs 14-06

#include <stdio.h>

int main() {
    int suma = 0;

    for (int i = 1; i <= 50; i++) {
        suma += i;
    }

    printf("La suma de los primeros 50 números es: %d\n", suma);

    return 0;
}
