
#include <stdio.h>

int main() {
    long int n, m, fact;

    do {
        printf("\nIngrese el factorial n entre 2 y 28: ");
        scanf("%ld", &n);
    } while (n < 2 || n > 28);

    for (m = n, fact = 1; n > 1; n--) {
        fact *= n;
    }
    
    printf("%ld! = %ld\n", m, fact);

    return 0;
}



