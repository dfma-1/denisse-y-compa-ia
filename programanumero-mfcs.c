
//programa numero
//titulo:programanumero
//fecha: 29/05/23
//nombre:maria fernanda cisneros sanchez

#include <stdio.h>
int main ()
{
    const int luna= 238857;
    float luna_kilo; //distancia en millas//
    printf("distancia a la luna %d millas\n", luna);
    luna_kilo=luna*1.609; //*una milla es igual a 1.609 km//
    printf("en kilometros es %.2fkm. \n", luna_kilo);
    return 0;
}