/* nombre: Lander Eduardo Macuitl Moreno
titulo: diferencia de operadores de incremento y postincremento*/ 
#include <stdio.h>
int main ()
{
    int n=5, t;
    t= ++n * --n;/*las 2 variables son de preincremento N=5 Y T=0*/
    /*despues de asignar el valor se incrementa*/
    printf("n= %d, t=%d\n",n,t);
    printf("%d %d %d \n", ++n, ++n, ++n);
    return 0;
}