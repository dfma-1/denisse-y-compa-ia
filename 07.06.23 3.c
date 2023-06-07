#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, num6;
    float media;
    int contador = 0;
    
    while (contador < 6)
    {
        printf("Introduce el número %d: ", contador + 1);
        scanf("%f", &num1);
        
        media += num1;
        contador++;
    }
    
    media /= 6;
    
    printf("La media es: %.2f\n", media);
    
    return 0;
}
