#include <stdio.h>

double sumarElementos(double a[], int n) 
{
    int i;
    double s = 0.0;
    for (i = 0; i < n; i++) 
	{
        s += a[i];
    }
    return s;
}

int main() 
{
    double arreglo[] = {1.5, 2.5, 3.5, 4.5};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    double suma = sumarElementos(arreglo, longitud);
    printf("La suma de los elementos del arreglo es: %.2f\n", suma);
	return 0;
}

