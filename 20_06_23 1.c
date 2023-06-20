#include <stdio.h>

float area_rectangulo(float b, float a);
float entrada();

int main()
{
    float b, h;
    printf("\nBase del rectangulo: ");
    b = entrada();
    printf("\nAltura del rectangulo: ");
    h = entrada();
    printf("\nArea del rectangulo: %.2f\n", area_rectangulo(b, h));
    
    return 0;
}

float entrada()
{
    float m;
    do
    {
        scanf("%f", &m);
        if (m <= 0.0)
        {
            printf("Entrada invalida. Introduce un numero valido: ");
        }
    } while (m <= 0.0);
    
    return m;
}

float area_rectangulo(float b, float a)
{
    return b * a;
}
