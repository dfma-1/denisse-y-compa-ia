//mfcs 15/06
#include<stdio.h>
#include<stdarg.h>

void maximo(int n, ...);
int main (void)
{
	puts("\t\t PRIMERA BUSQUEDA DEL MAXIMO \n");
	maximo(6,3,0,4,0,-12.5,1.2,4.5, 6.4);
	puts("\n\t PRIMERA BUSQUEDA DEL MAXIMO \n");
	maximo(4,55.4,17.8,5.9,-17.99);
	return 0;
}

void maximo(int n, ...)
{
	double mx,actual;
	va_list puntero;
	int i;
	va_start(puntero,n);
	mx = actual = va_arg(puntero,double);
	printf("\n\tArgumento actual: %.1lf\n",actual);
	for (i = 2; i <= n; i++)
	{
		actual = va_arg(puntero,double);
		printf("\t\tArgumetno actual: %.2lf\n",actual);
		if (actual > mx)
		{
			mx = actual;
		}
	}
	va_end(puntero);
}