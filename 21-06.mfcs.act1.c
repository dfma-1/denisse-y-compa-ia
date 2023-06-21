//elaborar un programa que defina 10 elementos, que los muestre, realice la suma e identifique el mayor de ellos
//mfcs 21-06
#include <stdio.h>

int main() {
    int numeros[10];
    int suma = 0;
    int mayor = 0;

    printf("Ingrese 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Num %d: ", i + 1);
        scanf("%d", &numeros[i]);

        suma += numeros[i];

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    printf("\nNumeros ingresados:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSuma de los numeros: %d\n", suma);
    printf("El mayor numero es: %d\n", mayor);

    return 0;
}
