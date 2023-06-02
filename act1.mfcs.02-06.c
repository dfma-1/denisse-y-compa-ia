//mfcs
//02-06-23

#include <stdio.h>

int main() {
    float calificacion;
    
    printf("Ingrese la calificación: ");
    scanf("%f", &calificacion);
    
    if (calificacion > 6.0) {
        puts("Aprobado");
    } else {
        puts("Reprobado");
    }
    
    return 0;
}