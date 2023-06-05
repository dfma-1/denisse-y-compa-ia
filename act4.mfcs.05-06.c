#include <stdio.h>

int main()
{
    char car;
    printf("Ingrese un carácter: ");
    scanf("%c", &car);

    switch (car)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c es una vocal\n", car);
            break;
        default:
            printf("%c no es una vocal\n", car);
    }

    return 0;
}
