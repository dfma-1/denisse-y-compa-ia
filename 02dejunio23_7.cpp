/*hacer un programa con la estructura si anidada
que si el numero es positivo, agregarmos un pre incremento 
de 1, si es numero es negativo, agregamos un post decremento
de -1, si el numero es igual a 0, agregamos una estructura de contador +10*/

#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num > 0) {
        ++num;
        printf("El numero es positivo incremento +1: %d\n", num);
    } else if (num < 0) {
        num--;
        printf("El numero es negativo decremento -1: %d\n", num);
    } else {
        int contador = 0;
        contador += 10;
        printf("El numero es igual a 0, el contador incrementa +10: %d\n", contador);
    }

    return 0;
}

