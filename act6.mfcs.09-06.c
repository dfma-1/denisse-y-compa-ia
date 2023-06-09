
#include <stdio.h>

int main() {
    int x= 0;

    do {
        printf("X: %d", x++);
    } while (x < 10);
    printf("X: %d", x++);

    return 0;
}
