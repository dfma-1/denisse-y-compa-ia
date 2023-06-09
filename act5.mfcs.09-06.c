#include <stdio.h>

int main() {
    int a;
    char car = 'a';

    do {
        printf("%c", car);
        car++;
    } while (car <= 'z');

    return 0;
}
