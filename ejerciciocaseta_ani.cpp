#include <stdio.h>

int main() {
    int opcion;
    float tarifa, monto, cambio;

    printf("�Bienvenido a la caseta de peaje!\n");
    printf("Por favor, seleccione el tipo de veh�culo:\n");
    printf("1. Veh�culo particular\n");
    printf("2. Autob�s\n");
    printf("3. Motocicleta\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            tarifa = 500;
            printf("Tarifa para veh�culo particular: $%.2f\n", tarifa);
            break;
        case 2:
            tarifa = 600;
            printf("Tarifa para autob�s: $%.2f\n", tarifa);
            break;
        case 3:
            tarifa = 100;
            printf("Tarifa para motocicleta: $%.2f\n", tarifa);
            break;
        default:
            printf("Opci�n inv�lida.\n");
            return 0;
    }

    printf("Ingrese el monto con el que va a pagar: $");
    scanf("%f", &monto);

    if (monto == tarifa) {
        cambio = 0;
        printf("Su cambio es: $%.2f\n", cambio);
    } else if (monto > tarifa) {
        cambio = monto - tarifa;
        printf("Su cambio es: $%.2f\n", cambio);
    } else {
        printf("La cantidad ingresada es insuficiente.\n");
        return 0;
    }

    printf("�Contin�e su viaje! �Gracias por utilizar nuestros servicios!\n");

    return 0;
}

