#include <stdio.h>

int main() {
    int numero_secreto = 17;
    int intento;
    printf("adivina el numero secreto: ");
    scanf("%d", &intento);
    printf("%s\n", (intento == numero_secreto) ? "GANASTEEE :D" : "incorrecto.");

    return 0;
}
