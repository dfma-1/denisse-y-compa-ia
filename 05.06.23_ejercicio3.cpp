/*
a)editar y depurar y describir el siguiente
codigo*/

#include <stdio.h>

int main() {
    char car;
    printf("Ingrese un caracter: ");
    scanf("%c", &car);

    if (car=='a'||car=='A'||car=='b'||car=='B'||car=='c'||car=='C'){
        printf("%c es una vocal\n", car);
    } else {
        printf("%c no es una vocal\n", car);
    }

    return 0;
}

