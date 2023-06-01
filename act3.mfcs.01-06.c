//mfcs
//01-06-23

#include <stdio.h>

int main() {
    int divisor, dividendo;
    int cociente, residuo;
    
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);
    
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividendo);
    
    if (dividendo != 0) {
        if (divisor % dividendo == 0) {
            cociente = divisor / dividendo;
            printf("%d es divisible por %d. Cociente: %d\n", divisor, dividendo, cociente);
        } else {
            residuo = divisor % dividendo;
            printf("%d no es divisible por %d. Residuo: %d\n", divisor, dividendo, residuo);
        }
    } else {
        printf("Error: no se puede dividir entre cero.\n");
    }
    
    return 0;
}