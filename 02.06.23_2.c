/*DAIRA ANIELA HERNANDEZ SILVA
desarrolle un programa en c que diga si un numero es mayor,menor o igual a cero
con la funcion si/simple*/
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es mayor a cero.\n");
    } else if (numero < 0) {
        printf("El número es menor a cero.\n");
    } else {
        printf("El número es igual a cero.\n");
    }

    return 0;
}
