
/*titulo:actividad 1 parte 2
nombre miriam alvares
fehca: 14 de junio*/


#include<stdio.h>

int esPrimo(int numero) {
    if (numero < 2) {
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;
    int rep;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);

    printf("Ingrese el número de repeticiones: ");
    scanf("%d", &rep);

    for (int i = 0; i < rep; i++) {
        if (esPrimo(num)) {
            printf("%d es primo.\n", num);
        } else {
            printf("%d no es primo.\n", num);
        }

        printf("Ingrese otro número (o ingrese -1 para salir): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }
    }

    return 0;
}

