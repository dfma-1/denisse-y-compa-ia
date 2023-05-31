#include <stdio.h>

int main() {
    int numeroSecreto = 42;
    int intento;

    printf("Adivina el n�mero secreto: ");

    while (1) {
        scanf("%d", &intento);

        (intento == numeroSecreto)
            ? printf("�Felicidades! Has adivinado el n�mero.\n")
            : ((intento > numeroSecreto)
                ? printf("El n�mero es muy alto. Intenta nuevamente: ")
                : printf("El n�mero es muy bajo. Intenta nuevamente: "));
        
        if (intento == numeroSecreto) {
            break;
        }
    }

    return 0;
}

