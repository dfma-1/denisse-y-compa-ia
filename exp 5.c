#include <stdio.h>

int main() {
    int x = 10;

    printf("Valor inicial de x: %d\n", x);

    --x;
    printf("Después de --x: %d\n", x);

    --x;
    printf("Después de --x nuevamente: %d\n", x);

    x--;
    printf("Después de x--: %d\n", x);

    ++x;
    printf("Después de ++x: %d\n", x);

    return 0;
}
