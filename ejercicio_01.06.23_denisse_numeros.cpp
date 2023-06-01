/*hacer un program que nos pida ingresar dos numeros, 
si los numeros son divisibles nos dara el cociente, 
si los numeros no son divisibles nos dira "error" y nos dará el residuo*/


#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    if (num2 != 0) {
        if (num1 % num2 == 0) {
            int cociente = num1 / num2;
            printf("Los números son divisibles, cociente: %d\n", cociente);
        } else {
            int residuo = num1 % num2;
            printf("Los números no son divisibles, residuo: %d\n", residuo);
        }
    } else {
        printf("Error\n");
    }
    
    return 0;
}

