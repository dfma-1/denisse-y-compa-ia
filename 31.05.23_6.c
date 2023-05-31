/*programa numero
titulo: Las sentencias de asignacion booleana
se pueden escribir de modo que den como
resultado un valor de tipo int que sera cerp o uno.
fecha:31,05,23
nombre:DAIRA ANIELA HERNANDEZ SILVA*/
#include<stdio.h>
int main ()
{
  int edad, MayorDeEdad, juvenil;
  scanf ("%i",&edad);
  MayorDeEdad=(edad>18); 
  juvenil=(edad>15)&& (edad<-18);
  MenorDeEdad=(edad<=15) && (edad>=0);
  printf "%i\n",MayorDeEdad);
  printf "%i\n",juvenil);
  printf "%i\n",MenorDeEdad);
  return 0;
}