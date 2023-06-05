/*SENTENCIA SWITCH /DAIRA ANIELA HERNANDEZ SILVA
* fecha 05.06.23
editar y  describir la variante en el uso de case */
#include <stdio.h>
int main () {
int opcion;
printf("escribe un numero");
scanf ("%i", &opcion);

switch(opcion){
    case 0:
    case 1:
    case 2:
    printf ("menor de tres\n ");
    break;
    case 3:
    puts ("igual a tres");
    break;
    default:
    puts ("fuera de rango");
    }
return 0;
}

