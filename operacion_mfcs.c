#include <stdio.h>
#include <stdbool.h>

int main() {
    char opcion;
    float numero1, numero2, resultado;

    while (true) {
        printf("Ingrese la operación a realizar (s - suma, r - resta, d - división, salir - para salir): ");
        scanf(" %c", &opcion);

        if (opcion == 'salir') {
            printf("Saliendo del programa...\n");
            break;
        }

        printf("Ingrese el primer número: ");
        scanf("%f", &numero1);

        printf("Ingrese el segundo número: ");
        scanf("%f", &numero2);

        switch (opcion) {
            case 's':
                resultado = numero1 + numero2;
                printf("El resultado de la suma es: %.2f\n", resultado);
                break;
            case 'r':
                resultado = numero1 - numero2;
                printf("El resultado de la resta es: %.2f\n", resultado);
                break;
            case 'd':
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                    printf("El resultado de la división es: %.2f\n", resultado);
                } else {
                    printf("No se puede dividir por cero. Intente nuevamente.\n");
                }
                break;
            default:
                printf("Operación no válida. Intente nuevamente.\n");
                break;
        }
    }

    return 0;
}
