/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio: 7*/
#include <stdio.h>
int main ()
{ 
    float num;
    puts ("ingresa un num:");
    scanf("%f",&num);
    if (num>0){
        puts ("el numero es mayor a cero");
        printf (%f, num+1);
    }
    else 
    if (num<0){
        puts ("el numero es menor a cero");
        printf ("%f", num-1);
    }
    if (num==0){
        puts ("el numero es igual cero");
        printf ("%f", num+10);
    }
    return 0;
}