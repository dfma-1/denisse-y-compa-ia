#include<stdio.h>

int main()

{
const int luna=238857;
float luna_kilo; /*distancia en millas*/
printf("distancia de la luna %d millas\n", luna);
luna_kilo=luna*1.609; /*una milla es igual a 1.609 kilometros*/
printf("en kilometros es %.2f km. \n",luna_kilo);

return 0;

}
