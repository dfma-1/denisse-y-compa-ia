//mfcs
//01-06-23

#include <stdio.h>
int main() {
    float consumo_actual;
    float consumo_anterior;
    float gasto;
    float tarifa;
    float importe;

    printf("Ingrese el consumo actual de corriente electrica: ");
    scanf("%f", &consumo_actual);

    printf("Ingrese el consumo anterior de corriente electrica: ");
    scanf("%f", &consumo_anterior);

    gasto = consumo_actual - consumo_anterior;

    if (gasto < 1000) {
        tarifa = 1.2;
    } else if (gasto >= 1000 && gasto <= 1850) {
        tarifa = 1.8;
    } else {
        tarifa = 2.1;
    }

    importe = gasto * tarifa;

    printf("La tarifa de luz para un gasto de %.2f es %.2f\n", gasto, tarifa);
    printf("El importe a pagar es: %.2f\n", importe);

    return 0;
}
