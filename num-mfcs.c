//programa numero
//titulo:num
//fecha: 29/05/23
//nombre: maria fernanda cisneros sanchez

#include <stdio.h>
int MiNumero;
int main () 
{
    //variables al principiop de la funcion main//
  int j;
printf ("cual es su numero favorito?");
scanf ("%d", &MiNumero);
int numerodeiteracciones = 5;
int i;
for (i = 2; i <=2* numerodeiteracciones; i+=2)
    {
      
printf ("iteraccion numero: %d\n", i);
}

printf ("cuanto vale aqui la variable i: %d\n", i);
  
printf ("cuanto vale aqui la variable MiNumero: %d\n", MiNumero);
  
printf ("cuanto vale aqui la variable numerodeiteracciones: %d\n",
	   numerodeiteracciones);
return 0;
}
