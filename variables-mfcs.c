//titulo: las variables globales con variables que se declaran
//fecha: 29/05/23
//nombre: maria fernanda cisneros sanchez

#include <stdio.h>
int a, b, c;    //declaracion de variable global
int main ()
{
    int valor;   //declaracion de variable local
    printf("tres valores"); 
    scanf("%d %d %d\a", &a,&b,&c);   //a,b,c variables globales
    
    valor=a+b+c;
    printf("valor de a: %d\n", a);
    printf("valor de b: %d\n", b);
    printf("valor de c: %d\n", c);
    printf("suma de las variables: %d\n" ,valor);
    return 0;
}
