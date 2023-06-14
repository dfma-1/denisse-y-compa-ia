/*titulo:ejercisio 3 
nombre :miriam 
fecha:14 de junio del 2023*/

#include <stdio.h>

int main() {
    int numero;
    int suma = 0;

    printf("Ingrese una serie de números (ingrese -1 para detener): \n");

    while (1) {
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }

        suma += numero;
    }

    printf("La suma de los números ingresados es: %d\n", suma);

    return 0;
}

