/*double suma(const double a[],const int n)
{
double s=0.0;
for(i=0;i<n;i++)
s+=a[i];
return s;
}*/

#include <stdio.h>

double suma(const double a[], const int n) {
    double s = 0.0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}

int main() {
    // Ejemplo 
    double arreglo[] = {2.5, 2.3, 3.7, 4.1};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    double resultado = suma(arreglo, longitud);
    printf("La suma es: %.3f\n", resultado);

    return 0;
}

