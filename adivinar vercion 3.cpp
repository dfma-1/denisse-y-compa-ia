#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeroAdivinar = 20;
    int intento;

    printf("Adivina el número entre 1 y 100.\n");

    while (1) {
        printf("Introduce tu intento: ");
        scanf("%d", &intento);

        if (intento == numeroAdivinar) {
            printf("¡Has encontrado el número!\n");
            break;
        } else {
            printf("Número incorrecto. Intenta de nuevo.\n");
        }
    }

    return 0;
}

