#include <stdio.h>

int main()
{
    float num;
    float sum = 0;
    int contador = 0;
    
    printf("ingresa 6 numeros por favor:\n");
    
    while (contador < 6)
    {
        scanf("%f", &num);
        sum += num;
        contador++;
    }
    
    float media = sum / 6;
    printf("La media es: %f\n", media);
    
    return 0;
}

