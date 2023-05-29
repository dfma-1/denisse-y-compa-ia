#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeroAdivinar = 20;
    int intento;

    printf("Adivina el n�mero entre 1 y 100.\n");

    while (1) {
        printf("Introduce tu intento: ");
        scanf("%d", &intento);

        if (intento == numeroAdivinar) {
            printf("�Has encontrado el n�mero!\n");
            break;
        } else {
            printf("N�mero incorrecto. Intenta de nuevo.\n");
        }
    }

    return 0;
}

