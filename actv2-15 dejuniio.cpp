#include<stdio.h>

void f(int p, float q)
{
	
	printf("al entrar en f, p (= entero)vale %d y q (=real ) vale %6.2f\n ",p, q);
	p = 7777;
	q = 12345.67;
	
printf("al salir de f, p vale %d y q  vale %6.2\n",p, q);
return;


}

int main (int argc, char* argv)

{
	int entero;
	float  real;
	 
	 entero = 22;
	 real = 33.3;
	  
	printf("antes de llamar a f, entero vale %dy real vale %6.2\n",entero, real );
	f(entero,real);
	printf("despiues de volver de f, enterovale %d y real vale %6.2f\n",entero, real);
	
	return 0;
	
}   



/*antes de llamar a f , entero vale 22 y real vale 33.30
al entrar en f, p (= ebtero) vale 22 y q (= real)  vale 33.3
al salir de f, p vale 7777  y q vale 12345.67*/
