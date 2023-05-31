#include <stdio.h>

int main() {
    int numeroSecreto = 42;
    int intento;

    printf("Adivina el número secreto: ");

    while (1) {
        scanf("%d", &intento);

        (intento == numeroSecreto)
            ? printf("¡Felicidades! Has adivinado el número.\n")
            : ((intento > numeroSecreto)
                ? printf("El número es muy alto. Intenta nuevamente: ")
                : printf("El número es muy bajo. Intenta nuevamente: "));
        
        if (intento == numeroSecreto) {
            break;
        }
    }

    return 0;
}

