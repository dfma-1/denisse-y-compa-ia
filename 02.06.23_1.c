/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio:programa en c que solicite una calificacion,, la calificacion tiene que ser flotante
entre 1 y 10 ,yevalue si es mayor a 6 , y si es mayor  a 6 se ejecute el programa y 
mande un mensajede de aprovado, utilizar la funcion puts y printf*/
#include <stdio.h>

int main() {
    float calificacion;

    printf("Ingrese la calificación obtenida (entre 1 y 10): ");
    scanf("%f", &calificacion);

    if (calificacion > 6.0 && calificacion <= 10.0) {
        puts("¡Aprobado!");
    } else {
        puts("Reprobado");
    }

    return 0;
}
