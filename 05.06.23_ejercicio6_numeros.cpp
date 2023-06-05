#include<stdio.h>

int main()
{
    int num_blancos = 0, num_digitos = 0, num_distintos = 0;
    char c;

    printf("Ingrese una cadena de caracteres (terminar con un punto): ");

    while ((c = getchar()) != '.') {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                num_digitos++;
                break;
            case ' ': case '\t': case '\n':
                num_blancos++;
                break;
            default:
                num_distintos++;
                break;
        }
    }

    printf("Cantidad de dígitos: %d\n", num_digitos);
    printf("Cantidad de espacios en blanco: %d\n", num_blancos);
    printf("Cantidad de caracteres distintos: %d\n", num_distintos);

    return 0;
}

