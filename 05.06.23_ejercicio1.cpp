/*
ejercicio: switch/
a)editar y depurar el ejercicio1
b)agregar una instrucción printf despues
de cada case con el mensaje ""se introdujo la variable
c)describir la estructura de la opción switch *en libreta*
fecha: 05 de junio 2023
nombre:Denisse Benítez Galindo*/

#include <stdio.h>

int main() {
    int opcion;

    printf("Ingrese un numero del 0 al 3: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 0:
            printf("se introdujo la variable\n");
			printf("cero");
            break;
        case 1:
            
			printf("se introdujo la variable\n");
			printf("uno");
            break;
        case 2:
        	printf("se introdujo la variable\n");
            printf("dos");
            break;
        case 3:
        	printf("se introdujo la variable");
            printf("tres");
            break;
        default:
            printf("Fuera de rango");
            break;
    }

    return 0;
}


