//elaborar un programa en lenguaje c que resuelva la siguiente seleccion :aparati de una conderacion 
//asignada con la siguinete  escala a)exele#include <stdio.h>

int main() {
    char calificacion;

    printf("Ingrese la calificación (a, b, c, d o f): ");
    scanf("%c", &calificacion);

    switch (calificacion) {
        case 'a':
        case 'A':
            printf("Excelente\n");
            break;
        case 'b':
        case 'B':
            printf("Notable\n");
            break;
        case 'c':
        case 'C':
            printf("Suficiente\n");
            break;
        case 'd':
        case 'D':
        case 'f':
        case 'F':
            printf("No aplicable\n");
            break;
        default:
            printf("Calificación no válida\n");
            break;
    }

    return 0;
}
nte b)notable c)suficiente d,f)no aplicable para 
