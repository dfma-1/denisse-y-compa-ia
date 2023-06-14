/*titulo:jercisio 1
fecha :14 de junio del 2023
nombre:miriam alvarez aguilar*/

#include<stdio.h>


int esPrimo(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int numRepetitions, num;
    int repetir = 1;

    while (repetir) {
        printf("ingresa un numero: ");
        scanf("%d", &num);

        printf("ingrese el numero de repeticiones: ");
        scanf("%d", &numRepetitions);

        for (int i = 0; i < numRepetitions; i++) {
            if (esPrimo(num))
                printf("%d es primo\n", num);
            else
                printf("%d no es primo\n", num);
        }

        printf("¿deseas repetir? [1: Sí / 0: No] ");
        scanf("%d", &repetir);
    }

    return 0;
}
