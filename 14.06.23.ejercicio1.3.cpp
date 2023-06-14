/* controlar el numero de repeticiones por bandera*/

#include <stdio.h>

int main() {
    int repeticiones;
    int contador = 0;

    printf("ingresa el numero de repeticiones: ");
    scanf("%d", &repeticiones);

    // verificar que el número de repeticiones sea válido
    if (repeticiones <= 0) {
        printf("el numero de repeticiones debe ser mayor que cero\n");
        return 0;
    }

    for (int i = 0; i < repeticiones; i++) {
        contador++;
        printf("repeticion %d\n", contador);
    }

    printf("fin del programa\n");

    return 0;
}

