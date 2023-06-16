/*nombre: miriam alvarez
titulo :actividad 2funcion logica 
fecha:15 de junio*/



#include <stdio.h>
#include <stdbool.h>

bool divide(int num1, int num2) 
{
    if (num2 % num1 == 0) 
	{
    	
        return true;
    } else {
        return false;
    }
}

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    if (divide(num1, num2)) {
        printf("%d divide a %d\n", num1, num2);
    } else {
        printf("%d no divide a %d\n", num1, num2);
    }

    return 0;
}

