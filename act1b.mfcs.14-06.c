//ejercicio1 mfcs 14-06 version2 centinela

#include <stdio.h>

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero, centinela;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("Ingrese el número de repeticiones (-1 para salir): ");
    scanf("%d", &centinela);

    while (centinela != -1) {
        for (int i = 1; i <= centinela; i++) {
            int primo = esPrimo(numero);

            if (primo) {
                printf("%d es primo\n", numero);
            } else {
                printf("%d no es primo\n", numero);
            }
        }

        printf("Ingrese el número de repeticiones (-1 para salir): ");
        scanf("%d", &centinela);
    }

    return 0;
}
