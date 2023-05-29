#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int numero_aleatorio, intento;
srand(time(NULL)); // inicializar la semilla aleatoria

// generar un n�mero aleatorio entre 1 y 100
numero_aleatorio = rand() % 100 + 1;

// pedir al usuario que adivine el n�mero
printf("Adivina el n�mero aleatorio entre 1 y 100: ");
scanf("%d", &intento);

// verificar si el n�mero es correcto y dar pistas si es necesario
while (intento != numero_aleatorio) {
if (intento < numero_aleatorio) {
printf("Demasiado peque�o. Intente de nuevo: ");
scanf("%d", &intento);
} else {
printf("Demasiado grande. Intente de nuevo: ");
scanf("%d", &intento);
}
}

// si llega aqu�, el n�mero adivinado es correcto
printf("�Correcto! El n�mero aleatorio era %d.", numero_aleatorio);

return 0;
}

