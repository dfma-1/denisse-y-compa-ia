/*determinar y visualizar el numero mas grande de dos numeros
mediante una funcion la cual debe pasar los paremtros por referencia*/

#include <stdio.h>

void encontrarMaximo(int num1, int num2, int *maximo) {
    if (num1 > num2) {
        *maximo = num1;
    } else {
        *maximo = num2;
    }
}

int main() {
    int num1, num2;
    int maximo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    encontrarMaximo(num1, num2, &maximo);

    printf("El número mas grande es: %d\n", maximo);

    return 0;
}

