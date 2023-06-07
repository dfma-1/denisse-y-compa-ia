#include <stdio.h>

int main()
  

   

{
float num;
    
   
float sum = 0;
    int count = 0;

    

   


while (count++ < 6)
    {
        printf("Introduzca un número: ");
        scanf("%f", &num);
        sum += num;
    }

    printf("La media es: %.2f\n", sum / 6);

    return 0;
}
