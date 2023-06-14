/*}
int cuadrado(int n)
{
int q=0;
while(q<=1000) /*el cuadrado ha de ser menor que 10*/
/*{
	q=n*n;
	printf("el cuadrado de: %d es %d\n",n,q);
	n++;
}
    return 0;
}*/

#include<stdio.h>

int cuadrado(int n) {
    int q=0;
    while (q<=1000) { /* El cuadrado ha de ser menor que 1000 */
        q=n*n;
        printf("el cuadrado de '%d' es '%d'\n",n,q);
        n++;
    }
    return 0;
}

int main() {
    int num=0;
    cuadrado(num);
    return 0;
}

