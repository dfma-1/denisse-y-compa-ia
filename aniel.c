/*ejercicio_aniela*/


#include <stdio.h>

int main() {
    int Minumero;
    printf("¿Cuál es tu número favorito? ");
    scanf("%d", &Minumero);

    int numerodeInteracciones = 5;
    int i;

    for (i = 0; i < numerodeInteracciones; ++i) {
        printf("Interacción número: %d\n", i);
    }

    printf("¿Cuánto vale aquí la verdadera variable i? %d\n", i);
    printf("¿Cuánto vale aquí la variable Minumero? %d\n", Minumero);
    printf("¿Cuánto vale aquí la variable numerodeInteracciones? %d\n", numerodeInteracciones);

    return 0;
}
