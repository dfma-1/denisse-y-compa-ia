#include<stdio.h>

int main() {
    /* Ejemplo 1 */
    int c;
    for (c = 'A'; c <= 'z'; c++) {
        printf("%c ", c);
    }

    /* Ejemplo 2 */
    for (c = '9'; c >= '0'; c--) {
        printf("%c ", c);
    }

    /* Ejemplo 3 */
    int i, a = 2;
    for (i = 1; i < 100; i *= a) {
        printf("%d ", i);
    }

    /* Ejemplo 4 */
    #define MAX 25
    int j;
    for (int i = 0, j = MAX; i < j; i++, j--) {
        printf("%d ", (i + 2 * j));
    }

    return 0;
}
 
