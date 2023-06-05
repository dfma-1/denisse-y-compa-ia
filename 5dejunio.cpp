#include<stdio.h>

int main() {
    int autobus;
    int importe;
    int motocicleta;
    int particular;
    int v;
    particular = 500;
    autobus = 600;
    motocicleta = 100;
    printf("Qué tipo de vehículo es?\n");
    printf("1) particular\n");
    printf("2) autobus\n");
    printf("3) motocicleta\n");
    scanf("%d", &v);
    switch (v) {
        case 1:
            printf("Cuota: %d\n", particular);
            scanf("%d", &importe);
            if (importe != particular) {
                printf("La cantidad de dinero no es la correcta\n");
            }
            break;
        case 2:
            printf("Cuota: %d\n", autobus);
            scanf("%d", &importe);
            if (importe != autobus) {
                printf("La cantidad de dinero no es la correcta\n");
            }
            break;
        case 3:
            printf("Cuota: %d\n", motocicleta);
            scanf("%d", &importe);
            if (importe != motocicleta) {
                printf("La cantidad de dinero no es la correcta\n");
            }
            break;
        default:
            printf("Opcion invalida\n");
            return 1;
    }
    return 0;
}

