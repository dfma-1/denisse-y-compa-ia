/*fehcqa 20 de junio 
nombre miriam alvarez aguilar */



#include <stdio.h>
#include <ctype.h>

int main() {
    char resp; /* respuesta del usuario */

    printf("¿Es masculino o femenino (M/F)? ");
    scanf(" %c", &resp);  
    resp = toupper(resp);

    switch (resp) {
        case 'M':
            puts("Es un enfermera");
            break;
        case 'F':
            puts("Es una enfermero");
            break;
        default:
            puts("Respuesta no válida");
    }

    return 0;
}




