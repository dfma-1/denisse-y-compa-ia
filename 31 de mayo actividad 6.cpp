/*programa numero 
titulo:las sentencias de aignacion boleana se puede escribir de modo que den como resultado un vaor de tipo int que sere cero o uno 
fecha 
nombre :miriam alvarez */
#include<stdio.h>
  int main ()
   
   {
   	int edad, mayordeedad, juvenil, menordeedad;
   	scanf("%i",&edad);
   	mayordeedad=(edad>15);/*asigna el valor de edad >18 a  cuando edad sea mahyor que 18*/
   	juvenil=(edad>15) && (edad<18);
   	menordeedad==(edad>0) && (edad<15);
   	
   	printf("%i\n",mayordeedad);
   	printf("%i\n",juvenil);
   	printf("%i\n",menordeedad);
   	
   	return 0;
}
