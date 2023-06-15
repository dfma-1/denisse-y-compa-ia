#include <stdio.h>
#include <stdarg.h>

void maximo(int n, ...)
{
    double mx, actual;
    va_list puntero;
    int i;

    va_start(puntero, n);
    mx = actual = va_arg(puntero, double);
    printf("\n\tARGUMENTO ACTUAL: %.1lf\n", actual);

    for (i = 2; i <= n; i++)
    {
        actual = va_arg(puntero, double);
        printf("\t\tARGUMENTO ACTUAL: %.1lf\n", actual);

        if (actual > mx)
        {
            mx = actual;
        }
    }

    printf("\t\tMAXIMO DE LA LISTA DE %d NUMEROS: %.1lf\n", n, mx);
    va_end(puntero);
}

int main()
{
    puts("\t\tPRIMERA BUSQUEDA DEL MAXIMO\n");
    maximo(6, 3.0, 4.0, -12.5, 1.2, 4.5, 6.4);

    puts("\n\tNUEVA BUSQUEDA DEL MAXIMO\n");
    maximo(4, 55.4, 17.8, 5.9, -17.99);

    return 0;
}
