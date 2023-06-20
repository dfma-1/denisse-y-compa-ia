//3) determinar y visualizar el número más grande de dos números
//mediante una función la cual debe de pasar los parámetros por referencia
//mfcs

#include <stdio.h>

void encontrarMaximo(int *num1, int *num2) {
    if (*num1 > *num2) {
        printf("El número más grande es: %d\n", *num1);
    } else {
        printf("El número más grande es: %d\n", *num2);
    }
}

int main() {
    int numero1, numero2;
    
    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);
    
    encontrarMaximo(&numero1, &numero2);
    
    return 0;
}
