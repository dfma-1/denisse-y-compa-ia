//titulo: las sentencias de asignacion booleana se puede dar resultado un valor de tipo int que sera cero o uno
//nombre:maria fernanda cisneros sanchez
//fecha:31/05/23


#include <stdio.h>
int main ()

{
int edad, mayordeedad, juvenil, menordeedad;
scanf("%i", &edad);
mayordeedad=(edad>18);
juvenil=(edad>14) && (edad<=17); 
menordeedad=(edad>0) && (edad<15);

printf("%i\n", mayordeedad);
printf("%i\n", juvenil);
printf("%i\n", menordeedad);
return 0;
}       
