#include <stdio.h>
#include <stdlib.h>

void mostrarDatos(char *nombre, char **direccion) {
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", *direccion);
}

int main() {
    char *nombre = (char *)malloc(5 * sizeof(char));
    char *direccion = (char *)malloc(10 * sizeof(char));

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese su dirección: ");
    scanf("%s", direccion);

    mostrarDatos(nombre, &direccion);

    free(nombre);
    free(direccion);

    return 0;
}

