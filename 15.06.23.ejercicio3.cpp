/*escribir y ejecutar un programa que imprima su nombre y direccion desde el teclado
por medio de una funcion que se llame mostrar datos nombre deberá pasar parametros por valor
 y direccion por referencia*/ 
 
 #include <stdio.h>

void mostrarDatosNombre(char nombre[100]) {
    printf("Nombre: %s\n", nombre);
}

void mostrarDatosDireccion(char *direccion) {
    printf("Direccion: %s\n", direccion);
}

int main() {
    char nombre[100];
    char direccion[100];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese su direccion: ");
    scanf("%s", direccion);

    mostrarDatosNombre(nombre);
    mostrarDatosDireccion(direccion);

    return 0;
}


