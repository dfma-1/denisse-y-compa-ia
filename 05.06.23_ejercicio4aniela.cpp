/*
hacer que identifique las vocales, si no, 
mostrar un letrero que diga que no es una vocal
*/

#include <stdio.h>

int main() {
    char car;
    printf("Ingrese una letra: ");
    scanf("%c", &car);

    switch (car) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c es una vocal\n", car);
            break;
        default:
            printf("%c no es una vocal\n", car);
            break;
    }

    return 0;
}

