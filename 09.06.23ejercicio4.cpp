#include<stdio.h>

int main()
{
    char opcion;
    do
    {
        puts("holaaaa");
        puts("¿deseas otro tipo de saludo?");
        printf("ingresa 's,S' para si o 'n' para salir: ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');
    
    puts("adioooos");
    return 0;
}

