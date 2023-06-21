  #include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int n[] = {3, 4, 5};
    char c[] = {'L', 'u', 'i', 's'};
    char d[] = "puesta del sol";

    for (int i = 0; i < 5; i++) {/*utilice el bucle for para umprimir solo los numero y asi se haga mas corto */
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("n[%d]: %d\n", i, n[i]);
    }

    for (int i = 0; i < 4; i++) {
        printf("c[%d]: %c\n", i, c[i]);
    }

    printf("d: %s\n", d); 
	/*para mas corto el programa solo puse s que significa caracteres*/ 

    return 0;
}

