//mfcs.05-06
//ejercicio 2
//editar y depurar
//describir la instruccion de case

#include <stdio.h>

int main()
{
    int opcion;
    printf("Ingrese un número: ");
    scanf("%i", &opcion);
    switch (opcion)
    {
        case 0:
        case 1:
        case 2:
            printf("menor de tres......");
            break;
        case 3:
            puts("igual a tres\n");
            break;
        default:
            puts("fuera de rango");
            break;
    }
    return 0;
}
