/*elaborar un programa en lenguaje c que resuleva la siguiente seleccion:
a partir de una ponderacion asignada con la siguiente escala
a):excelente
b):notable
c):suficiente
d,f):no aplicable para esta nota
que el programa lea las variables a,b,c,d,f,A,B,C,D,F*/

#include <stdio.h>

int main() {
    char nota;

    printf("Ingrese una nota, entre a,A,b,B,c,C,d,D,f,F: ");
    scanf("%c", &nota);

    switch (nota) {
        case 'a':
        case 'A':
            printf("¡Excelente!\n");
            break;
        case 'b':
        case 'B':
            printf("¡Notable!\n");
            break;
        case 'c':
        case 'C':
            printf("Suficiente\n");
            break;
        case 'd':
        case 'D':
        case 'f':
        case 'F':
            printf("No aplicable para esta nota :(\n");
            break;
        default:
            printf("no se reconoce esta nota :/\n");
            break;
    }

    return 0;
}



