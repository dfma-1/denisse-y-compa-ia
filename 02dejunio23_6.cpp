/*hacer un programa con el si anidado, 
que nos diga si el numero es positivo, negativo o igual a 0*/

#include <stdio.h>

int main() {
    float n;
    printf("Ingrese un numero: ");
    scanf("%f", &n);

    if (n > 0) {
        printf("El numero es positivo :)\n");
    } else if (n < 0) {
        printf("El numero es negativo :(\n");
    } else {
        printf("El numero es igual a cero\n");
    }

    return 0;
}

