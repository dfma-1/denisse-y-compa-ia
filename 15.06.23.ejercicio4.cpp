/*escribir una funcion logica de dos argumentos enteros
que devuelva verdadero si el primero divide al segundo
y falso en caso contrario*/

#include <stdio.h>

bool divide(int num1, int num2) {
    if (num2 % num1 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (divide(num1, num2)) {
        printf("%d divide a %d\n", num1, num2);
    } else {
        printf("%d no divide a %d\n", num1, num2);
    }

    return 0;
}

