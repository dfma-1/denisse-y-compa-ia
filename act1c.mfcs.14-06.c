//ejercicio1 mfcs 14-06 version 3 bandera

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
    int numero;
    char bandera;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("Ingrese 's' para continuar o 'n' para salir: ");
    scanf(" %c", &bandera);

    while (bandera == 's' || bandera == 'S') {
        int repeticiones;
        
        printf("Ingrese el número de repeticiones: ");
        scanf("%d", &repeticiones);

        for (int i = 1; i <= repeticiones; i++) {
            int primo = esPrimo(numero);

            if (primo) {
                printf("%d es primo\n", numero);
            } else {
                printf("%d no es primo\n", numero);
            }
        }

        printf("Ingrese 's' para continuar o 'n' para salir: ");
        scanf(" %c", &bandera);
    }

    return 0;
}
