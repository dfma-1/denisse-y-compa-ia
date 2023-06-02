/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio: calcular el mayor de dos numeros leidos desde el teclado
y visualizarlos utilizando el si/simple con la funcion float*/
#include <stdio.h>

int main() {
    float numero1, numero2;

    printf("Ingrese el primer número: ");
    scanf("%f", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &numero2);

    if (numero1 > numero2) {
        puts("El primer número es mayor");
    } else if (numero2 > numero1) {
        puts("El segundo número es mayor");
    } else {
        puts("Ambos números son iguales");
    }

    return 0;
}
