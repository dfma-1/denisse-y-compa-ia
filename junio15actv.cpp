/*nombre :miriam alvarez
fecha: 15 de junio 
titulo: numero mas gande */



#include <stdio.h>

void visualizarNumeroMasGrande(int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    printf("El n�mero m�s grande es: %d\n", max);
}

int main() {
    int num1, num2;

    printf("Ingrese el primer n�mero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &num2);

    visualizarNumeroMasGrande(num1, num2);

    return 0;
}

