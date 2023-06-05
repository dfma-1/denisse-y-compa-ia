#include <stdio.h>

int main() {
    char car;
    
    printf("Ingrese un carácter: ");
    scanf("%c", &car);
    
    switch (car) {
        case 'a':
        case 'A':
            printf("%c es una vocal\n", car);
            break;
        default:
            printf("%c no es una vocal\n", car);
            break;
    }
    
    return 0;
}

