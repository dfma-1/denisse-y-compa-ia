/*ejercicios 02 de junio 2023
1.- Desarrollar un programa en lenguaje c que solicite una calificacion obtenida,
tiene que ser flotante entre 1 y 10,
no puede ser cualquier otro numero, y muestre un letrero si es mayor a 6,
mande un mensaje de aprobado,si la calificacion es menor a 6, 
se deja de ejecutar el programa utilizar la funcion puts y printf*/

#include <stdio.h>

int main() {
    float califi;

    printf("Ingrese la calificacion entre 1 y 10: ");
    scanf("%f", &califi);

    if (califi < 1 || califi > 10) {
        printf("La calificacion debe estar entre 1 y 10.\n");
        return 0;
    }

    if (califi > 6) {
        puts("La calificacion es mayor a 6, aprobado");
    }

    return 0;
}

