/*calcular la suma de una serie de numeros leidos por teclado 
hasta que numero sea igual a -1*/
#include <stdio.h>

int main() 
{
    int numero, suma = 0;

    printf("Ingrese los números (ingrese -1 para finalizar):\n");

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
