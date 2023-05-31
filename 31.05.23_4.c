/*programa numero
titulo: diferencia de operadores 
de incremento y posticremento
fecha:31,05,23
nombre:DAIRA ANIELA HERNANDEZ SILVA*/
#include<stdio.h>
int main ()
{
  int m=99, n;
  n= ++m;
  
  printf ("m= %d, n=%d\n", m,n);
  n= ++m;
  
  printf("m=%d, n=%d\n", m,n);
  printf("m=%d\n",m++);
  
  return 0;
}