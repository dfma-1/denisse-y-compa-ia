#include <stdio.h>

int main()
{
  int digito_leido=0; /*bandera sera verdadero o falso  */
  char car;
  while (!digito_leido)
{
    printf("introduce un caracter: ");
    scanf("%c",&car);
    if ('0' <= car && car <= '9')
    {
    digito_leido= 1;
}
else 
{
    printf("el caracter ingresado no es unn digito . intente nuevamente.\n");
}
}
printf ("digito  leido : %c\n", car);
return 0;
}