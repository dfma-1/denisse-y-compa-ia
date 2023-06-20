#include <stdio.h>

double suma(const double a[], const int n)
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
    double array[] = {1.5, 2.7, 3.9, 4.2};
    int size = sizeof(array) / sizeof(array[0]);
    
    double result = suma(array, size);
    printf("La suma de la formacion es : %.2lf\n", result);
    
    return 0;
}
