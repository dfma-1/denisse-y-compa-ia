/* denisse benitez galindo
titulo: diferencia de operadores
fecha: 31 de mayo 2023*/

#include<stdio.h>

int main ()
{
 int m=99, n;
 n= ++m;
 
 printf("m=%d, n=%d\n", m,n);
 n= ++m;
 printf("m= %d, n=%d\n", m,n);
 printf("m= %d\n", m++);
 printf("m= %d\n",++m);
 
 return 0;
}
