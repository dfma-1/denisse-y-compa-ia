/*SENTENCIA SWITCH /DAIRA ANIELA HERNANDEZ SILVA
* fecha 05.06.23
*editar , depurar y describir el siguiente codigo
solamente lee el caracter y dice si es minuscula o mayuscula solo con las letras a,b,c
este con if */
#include <stdio.h>
int main(){
    char car;
    printf ("ingrese un caracter :");
    scanf ("%c", &car);
    if (car=='a'|| car=='A'||car=='b'|| car=='B'|| car=='c'|| car=='C' ){
        printf("%c es una vocal\n",car);
    }else {
        printf ("%c no es una vocal\n,",car);
    }
    return 0;
}