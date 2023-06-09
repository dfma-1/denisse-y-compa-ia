#include <stdio.h>

int main() {
    char opcion;

    do {
        puts("hola");
        puts("¿Desea otro tipo de saludo?");
        printf("A continuación, pulse Enter: ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');

    puts("adios");

    return 0;
}
