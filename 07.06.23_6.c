#include <stdio.h>

int main() {
    
    for (char c = 'A'; c <= 'z'; c++) {
        printf("%c", c);
    }

    printf("\n");

    for (char c = '9'; c >= '0'; c--) {
        printf("%c", c);
    }

    printf("\n");

    for (int i = 1; i < 100; i *= 2) {
        printf("%d ", i);
    }

    printf("\n");

    int j = 25;
    for (int i = 0; i < 25; i++) {
        printf("%d ", (i + 2 * j));
        j--;
    }

    return 0;
}
