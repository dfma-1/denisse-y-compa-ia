#include <stdio.h>

int main() {
    int opcion;
    float tarifa, cantidad, cambio;

    printf("Bienvenido a nuestra caseta<3\n");
    printf("ingrese el tipo de vehiculo:\n");
    printf("1: particular\n");
    printf("2: autobus\n");
    printf("3: motocicleta\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            tarifa = 500;
            printf("Tarifa: $%.2f\n", tarifa);
            break;
        case 2:
            tarifa = 600;
            printf("Tarifa: $%.2f\n", tarifa);
            break;
        case 3:
            tarifa = 100;
            printf("Tarifa: $%.2f\n", tarifa);
            break;
        default:
            printf("Opción invalida.\n");
            return 0;
    }

    printf("Ingrese la cantidad con la que va a pagar: $");
    scanf("%f", &cantidad);

    if (cantidad == tarifa) {
        cambio = 0;
        printf("la cantidad es correcta: $%.2f\n", cambio);
    } else if (cantidad > tarifa) {
        cambio = cantidad - tarifa;
        printf("Su cambio es: $%.2f\n", cambio);
    } else {
        printf("La cantidad ingresada es insuficiente :(\n");
    }

    printf("¡gracias por preferirnos!¡regrese pronto!<3\n");

    return 0;
}

