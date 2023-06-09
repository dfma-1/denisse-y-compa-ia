#include <stdio.h>

int main()
{
   int digito_leido = 0;
   char car;
   
   while (!digito_leido)
   {
       printf("introduzca un caracter: ");
       scanf(" %c", &car);
       
       if('0' <= car && car <= '9')
       {
           digito_leido = 1;
       }
       else
       {
           printf("el caracter ingresado no es un digito. Intente de nuevo\n");
       }
   }
   printf("digito leido: %c\n", car);
   
   return 0;
}
