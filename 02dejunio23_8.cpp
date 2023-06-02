#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("valor de a: ");
    scanf("%d", &a);
    
    printf("valor de b: ");
    scanf("%d", &b);
    
    printf("valor de c: ");
    scanf("%d", &c);
    
    if (a > 0) {
        if (b > 0) {
            ++a;
        } else if (c > 0) {
            if (a < 5) {
                ++b;
            } else if (b < 5) {
                ++c;
            } else {
                --a;
            }
        } else if (c < 5) {
            --b;
        } else {
            --c;
        }
    } else {
        a = 0;
    }
    
    printf("El valor de a es: %d\n", a);
    printf("El valor de b es: %d\n", b);
    printf("El valor de c es: %d\n", c);
    
    return 0;
}

