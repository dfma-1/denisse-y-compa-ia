#include <stdio.h>

int main ()
{
    
int i = 0;

int a [10] ={10,1,2,-3,-100, 1000, -200,7, 1, 03};

int r = 0;

for (i=0; i<10; i++) {
    
if (a[i]> a[r]){
    
r=i;

printf("el numero mayor en el arreglo es; %d\n ", a [r]);
printf ("el indice del numero mayor: %d\n", r);
}
}
return 0;
}
