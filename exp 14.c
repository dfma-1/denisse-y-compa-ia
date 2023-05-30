#include <stdio.h>

int main() {
    int ventas = 50000;
    int sal_min = 1000;
    int años = 8;
    int IVA = 15;

    int resultado = ventas < sal_min * 3 && años >> (10 * IVA);

    printf("El resultado de la expresión es: %d\n", resultado);

    return 0;
}
