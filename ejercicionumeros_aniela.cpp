#include <stdio.h>

int main() {
    int blancos = 0, digitos = 0, distintos = 0;
    char c;

    printf("Ingrese una cadena de caracteres (terminar con un punto): ");

    while ((c = getchar()) != '.') {
        if (c >= '0' && c <= '9') {
            digitos++;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            blancos++;
        } else {
            distintos++;
        }
    }

    printf("Cantidad de dígitos: %d\n", digitos);
    printf("Cantidad de espacios en blanco: %d\n", blancos);
    printf("Cantidad de caracteres distintos: %d\n", distintos);

    return 0;
}

