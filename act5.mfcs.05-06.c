//mfcs.05-06
//ejercicio 5

#include <stdio.h>

int main()
{
    char calificacion;
    printf("Ingrese la calificación (A, B, C, D o F): ");
    scanf("%c", &calificacion);

    switch (calificacion)
    {
        case 'A':
        case 'a':
            printf("Excelente\n");
            break;
        case 'B':
        case 'b':
            printf("Notable\n");
            break;
        case 'C':
        case 'c':
            printf("Suficiente\n");
            break;
        case 'D':
        case 'd':
        case 'F':
        case 'f':
            printf("No aplicable para esta nota\n");
            break;
        default:
            printf("Calificación no válida\n");
    }

    return 0;
}
