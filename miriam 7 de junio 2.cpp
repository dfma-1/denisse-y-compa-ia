#include <stdio.h>

int main()
{
    int digito_leido = 0; 
    char car;
    int flag = 0; // bandera para indicar si se ha le�do un d�gito

    while (!digito_leido)
    {
        printf("Introduzca un car�cter: ");
        scanf("%c", &car);
        
        if (car >= '0' && car <= '9')
        {
            flag = 1; // se ha le�do un d�gito
            digito_leido = 1; // se cambia el estado de la bandera para salir del bucle
        }
        else
        {
            flag = 0; // no se ha le�do un d�gito
            digito_leido = 0; // la bandera se mantiene en 0 para continuar en el bucle
        }

        
        while (getchar() != '\n')
        {
        }
    }

    if (flag)
    {
        printf("Se ha le�do un d�gito.\n");
    }
    else
    {
        printf("No se ha le�do un d�gito.\n");
    }

    return 0;
}

