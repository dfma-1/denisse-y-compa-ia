/*que se repita un numero de
veces controlado por centinela*/

#include <stdio.h>

int main() {
    int centi;
    int contador = 0;

    printf("ingresa un numero entero como centinela (0 para terminar): ");
    scanf("%d", &centi);

    while (centi != 0) {
        contador++;

        printf("repeticion %d\n", contador);

        printf("ingresa un numero entero como centinela (0 para terminar): ");
        scanf("%d", &centi);
    }

    printf("fin del programa\n");

    return 0;
}

