/*
hacer un programa en lenguaje c que nos pida dos numeros
y nos muestre un letrero donde diga si los numeros son divisibles,
si los numeros son divisibles nos muestra un letrero que diga que no
son divisibles y nos muestre un letrero que nos muestre el residuo utilizando
el si doble*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    if (n2 != 0) {
        if (n1 % n2 == 0) {
            puts("Los numeros son divisibles:) no tiene residuo");
        } else {
            printf("Los numeros no son divisibles:( El residuo es %d\n", n1 % n2);
        }
    } else {
        puts("Error:/ el segundo numero debe ser diferente de cero para realizar la division");
    }

    return 0;
}

