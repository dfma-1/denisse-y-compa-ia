/*calcular la suma de una serie de numeros leidos por 
teclado hasta que numero sea igual a -1*/

#include <stdio.h>

int main() {
    int num;
    int suma=0;

    printf("ingrese una serie de numero, [si desea terminar pon '-1']\n");

    while (1) {
        scanf("%d",&num);

        if (num==-1)
            break;

        suma+=num;
    }

    printf("la suma de los numeros es: %d\n", suma);

    return 0;
}

