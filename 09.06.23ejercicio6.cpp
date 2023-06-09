/*int x=0
do
printf("x:d",x++)
(x 10) while*/

#include <stdio.h>

int main() {
    int x = 0;
    do {
        printf("x: %d\n", x++);
    } while (x <= 10);
    
    return 0;
}

