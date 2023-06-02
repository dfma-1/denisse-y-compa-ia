/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio: hacer un programa en c que nos pida dos numeros y si el residuo es 0 nos muestre un letrero 
donde diga si los numeros son divisibles y si es asi   nos muestre un letrero que diga que no*/
#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);

    if (numero2 != 0) {
        if (numero1 % numero2 == 0) {
            puts("Los números son divisibles.");
        } else {
            puts("Los números no son divisibles.");
        }
    } else {
        puts("incorrecto: no se puede dividir entre cero.");
    }

    return 0;
}

