 
 /* ejercicio: 2 modificado 
 daira aniela hernandez silva */
 #include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        numero += 1;
        puts("El número es mayor a cero. Se le agregó +1.");
    } else if (numero < 0) {
        numero -= 1;
        puts("El número es menor a cero. Se le restó -1.");
    } else {
        numero += 10;
        puts("El número es igual a cero. Se incrementó en 10.");
    }

    printf("Nuevo valor del número: %d\n", numero);

    return 0;
}
