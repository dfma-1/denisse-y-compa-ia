//mfcs, 02-06
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("El numero %d es mayor que %d.\n", num1, num2);
    }
    if (num1 < num2) {
        printf("El numero %d es menor que %d.\n", num1, num2);
    }
    if (num1==num2) {
        ("El numero %d es igual que %d.\n", num1, num2);
    }

    return 0;
}