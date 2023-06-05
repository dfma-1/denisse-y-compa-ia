#include<stdio.h>

int main()
{
    int num_blancos = 0, num_digitos = 0, num_distintos = 0;
    char c;

    printf("Introduce una secuencia de caracteres (termina con un punto):\n");

    do {
        scanf("%c", &c);

        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                num_digitos++;
                break;
            case ' ': case '\t': case '\n':
                num_blancos++;
                break;
            case '.':
                break;
            default:
                num_distintos++;
                break;
        }
    } while (c != '.');

    printf("Número de dígitos: %d\n", num_digitos);
    printf("Número de espacios en blanco: %d\n", num_blancos);
    printf("Número de caracteres distintos: %d\n", num_distintos);

    return 0;
}


