/*escribir un programa que calcule la suma de los 50 primeros numeros enteros*/
#include <stdio.h>

int main()  
{
    int suma = 0;

    for (int i = 1; i <= 50; i++) {
        suma += i;
    }

    printf("La suma de los 50 primeros números enteros es: %d\n", suma);

    return 0;
}

