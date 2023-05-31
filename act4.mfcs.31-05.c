//titulo:diferencia de operadores de incremento y postincremento
//nombre:maria fernanda cisneros sanchez
//fecha:31/05/23

#include <stdio.h>
int main ()

{
int m=99, n;
n= ++m;

printf("m= %d, n=%d\n",m,n);
n= ++m;
printf("m= %d, n=%d\n",m,n);
printf("m= %d\n", m++);
printf("m= %d\n", ++m);
return 0;
}       
