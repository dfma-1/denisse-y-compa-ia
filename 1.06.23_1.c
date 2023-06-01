#include <stdio.h>

int main() 
{
    float gasto tarifa;
    printf("ingrese el gasto de corriente electrica:");
    scanf ("%f", &gasto);
    if (gasto<1000){
        tarifa=0.9
    } else if (gasto>=1000 && gasto<=1850){
        tarifa=1.9
    }else (gasto>1850){
        tarifa=3
    }
    printf("la tarifa de luz para un gasto de %.2f es: %.2f\n",gasto)
    return 0;