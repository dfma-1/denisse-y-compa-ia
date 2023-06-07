#include <stdio.h>

#define MAX 25

int main() {
    char c;
    int i, j;

    /* Programa 1 */
    for (c = 'A'; c <= 'z'; c++) {
        printf("%c", c);
    }
    printf("\n");

    /* Programa 2 */
    for (c = '9'; c >= '0'; c--) {
        printf("%c", c);
    }
    printf("\n");

    /* Programa 3 */
    for (i = 1; i < 100; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");

    /* Programa 4 */
    for (i = 0, j = MAX; i < j; i++, j--) {
        printf("%d ", (i + 2 * j));
    }
    printf("\n");

    return 0;
}

