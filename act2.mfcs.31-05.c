//titulo:operador de asignacion = igual
//nombre:maria fernanda cisneros sanchez
//fecha:31/05/23

#include <stdio.h>
int main ()

{
int a, b, c;
int codigo, fahrenheit, coord_x, coord_y;

codigo=3467;
fahrenheit=123.456;
coord_x=525;
coord_y=725;
a=b=c=45;  //se le asigna a las variables a, b, c, el valor de 45
a=(b=(c=45));   //se le asigna a las variablesa,b,c, el valor de 45

printf("%i valor de la variable ´codigo´ \n", codigo);
printf("%i valor de la variable ´fahrenheit´ \n", fahrenheit);
printf("%i valor de la variable ´coord_x´ \n", coord_x);
printf("%i valor de la variable ´coord_y´ \n", coord_y);
printf("%i valor de la variable ´a´ \n", a);
printf("%i valor de la variable ´b´ \n", b);
printf("%i valor de la variable ´c´ \n", c);

}