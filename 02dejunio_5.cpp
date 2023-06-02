#include<stdio.h>
#include<math.h>

int main()
{

float f,x;
printf("\n Elige un valor de x: ");
scanf("%f",&x);
/*seleccion de rango donde se encuentra x */

if (x<= 0.0)
f= -pow(x,2) - x;
else
f= -pow(x,2) +3*x;
printf("f(%.1f) = %.3f",x,f);
return 0;
}
/*primero para la variable f, se eleva el x a la potencia de dos,
y al resultado se le resta el resultado inicial de x */
/*se nos muestra el resultado x y f*/
