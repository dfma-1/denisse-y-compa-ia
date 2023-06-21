#include <stdio.h>

int main() {
    int numeros[6] = {10, 20, 30, 40, 50};
    int otrosNumeros[] = {3, 4, 5};
    char c[] = {'L', 'u', 'i', 's'};
    char d[] = {"Puesta de Sol"};
    
    // Imprimir el arreglo numeros
    printf("Arreglo numeros:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");
    
    // Imprimir el arreglo otrosNumeros
    printf("Arreglo otrosNumeros:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", otrosNumeros[i]);
    }
    printf("\n\n");
    
    // Imprimir el arreglo c
    printf("Arreglo c:\n");
    for (int i = 0; i < 4; i++) {
        printf("%c ", c[i]);
    }
    printf("\n\n");
    
    // Imprimir el arreglo d
    printf("Arreglo d:\n%s\n", d);
    
    return 0;
}
