#include <stdio.h>
#include <ctype.h>

int main()
{
    char resp;
    char c;

    printf("¿Es masculino o femenino (M/F)? ");
    scanf(" %c", &resp); // Agregué un espacio antes de %c para ignorar espacios en blanco o caracteres de nueva línea

    resp = toupper(resp);

    switch (resp)
    {
        case 'M':
            puts("Es un enfermero");
            break;

        case 'F':
            puts("Es una enfermera");
            break;

        default:
            puts("No es enfermero ni enfermera");
            break;
    }

    return 0;
}
