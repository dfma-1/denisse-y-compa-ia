//2) Escribir una función lógica de dos argumentos enteros 
//que devuelva verdadero si el primero divide al segundo y falso en caso contrario
//mfcs

#include <stdio.h>
#include <stdbool.h>

bool divide(int a, int b) {
    if (b % a == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (divide(num1, num2)) {
        printf("%d divide a %d\n", num1, num2);
    } else {
        printf("%d no divide a %d\n", num1, num2);
    }

    return 0;
}
