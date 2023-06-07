#include <stdio.h>

int main()
{
    int digito_leido = 0;
    char car;
    
    while (!digito_leido)
    {
        printf("Introduzca un caracter: ");
        scanf(" %c", &car);
        
        if (('0' <= car))&&((car <= '9'))
        {
            digito_leido = 1;
        }
        else
        {
            printf("El caracter ingresado no es un digito. Intente nuevamente.\n");
        }
    }
    
    printf("Digito leido: %c\n", car);
    
    return 0;
}

