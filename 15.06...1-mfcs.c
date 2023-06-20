//!) Escribir y ejecutar un programa que imprima su nombre y dirección por medio de una función que se llame mostrar datos
//Nombre deberá pasar parámetros por valor y dirección por referencia
//mfcs

#include <stdio.h>

void mostrar_datos(char *nombre, char **direccion);

int main() {
    char nombre[100];
    char *direccion[100];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese su dirección: ");
    fgets(direccion, sizeof(direccion), stdin);

    mostrar_datos(nombre, &direccion);

    return 0;
}

void mostrar_datos(char *nombre, char **direccion) {
    printf("Nombre: %s", nombre);
    printf("Dirección: %s", direccion);
}
