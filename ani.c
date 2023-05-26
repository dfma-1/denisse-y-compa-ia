/*daira aniela*/

#include <stdio.h>

int main() {
    char *palabra[] = {"holamundo ", "holamundo2", "holamundo3"};
    int tam = sizeof(palabra) / sizeof(palabra[0]);

    int i = 0;
    while (i < tam) {
        printf("%s", palabra[i]);
        i++;
    }

    printf(" ");

    return 0;
}
