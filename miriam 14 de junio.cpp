
#include<stdio.h>

int main() {
    int suma = 0;
    
    for (int numero = 1; numero <= 50; numero++) {
        suma += numero;
    }
    
    printf("La suma de los primeros 50 números es: %d\n", suma);
    
    return 0;
}

