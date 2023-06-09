#include <stdio.h>

int main() {
    char opcion;

    do {
        puts("Hola");
        puts("Otro tipo de saludo");
        printf("A continuación, pulse Intro: ");
        scanf("%c", &opcion);
        getchar(); // Limpiar el búfer de entrada después de scanf
    } while (opcion == 's' || opcion == 'S');

    puts("Adiós");

    return 0;
}
