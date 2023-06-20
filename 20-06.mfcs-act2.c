//programa numero
//titulo:
//fecha:20-06-23
//nombre: maria fernanda cisneros sanchez

#include <stdio.h>

double cuadrado(double n);

int main()
{
    double x = 11.5;
    printf("%.2f al cuadrado = %.2f\n", x, cuadrado(x));
    return 0;
}

double cuadrado(double n)
{
    return n * n;
}
   