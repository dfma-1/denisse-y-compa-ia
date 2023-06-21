/*elaborar un programa que defina un arreglo de diez elementos 
que los muestre, realice la suma e identifique el mayor de ellos */

#include <stdio.h>

int main() {
    int arreglo[10];
    int i, sum = 0, ma;

    printf("escribe la cantidad de elementos que se te indican:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("elementos del arreglo: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        sum += arreglo[i];
    }
    printf("suma de los elementos: %d\n", sum);

    ma = arreglo[0];
    for (i = 1; i < 10; i++) {
        if (arreglo[i] > ma) {
            ma = arreglo[i];
        }
    }
    printf("el mayor elemento es: %d\n", ma);

    return 0;
}

