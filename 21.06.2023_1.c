//*elaborar un programa que defina 10 elementos que los muestre,realize la suma e identifique el mayor de ellos*//
/*DAIRA ANIELA HERNANDEZ SILVA
FECHA : 21 DE JUNIO DEL 2023*/
#include <stdio.h>

int main() {
    int numeros[10];
    int suma = 0;
    int mayor = 0;

    // Leer los elementos y calcular la suma/
    printf("Ingrese 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        suma += numeros[i];

        if (numeros[i] > mayor) {
            mayor = numeros [i];
        }
    }

    // Mostrar los numeros ingresados
    printf("Los numeros ingresados son: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    // Mostrar la suma
    printf("\nLa suma de los numeros es: %d\n", suma);

    // Mostrar numero mayor
    printf("El numero mayor es: %d\n", mayor);

    return 0;
}
