/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio: la veriale f se eleva a la x a la potencia de dos ,
yb al resultado se le resta el resultado inicial de x y se muestra en pantallan 
el resultado de x*/
 #include <stdio.h>
 #include <math.h>
 int main ()
 {
     float f,x;
     printf ("\n Elige un valor de x:");
     scanf ("%f", &x);
       /*seleccion del rango donde se encuentra x */
       if (x<=0.0)
          f= -pow(x,2) - x;
          else 
          f= -pow(x,2) +3*x;
          printf("f(%.1f)= %.3f" ,x,f);
          return 0;
 }