/*PROGRAMA NUMERO
titulo;diferencia de operadores y incremento 
fecha:31 de mayo
nombre:miriam alvarez */

#include<stdio.h>
 
int main ()

{
	int m=99, n;
	n= ++m;
	 printf("m= %d, n=%\n", m,n);
	 n= ++m;
	 printf("m= %d, n=%d\n", m,n);
	 printf("m= %d\n ", m++);
	 printf("m= %d\n", ++m);
	 return 0;
}
