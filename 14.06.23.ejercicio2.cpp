/*escribir un programa que calcule la suma de los primeros 50 numeros*/

#include <stdio.h>

int main() {
    int suma = 0;

    for (int i = 1; i <= 50; i++) {
        suma += i;
    }

    printf("la suma de los primeros 50 numeros es...: %d\n", suma);

    return 0;
}

