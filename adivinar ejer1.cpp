#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int numero_aleatorio, intento;
srand(time(NULL)); // inicializar la semilla aleatoria

// generar un número aleatorio entre 1 y 100
numero_aleatorio = rand() % 100 + 1;

// pedir al usuario que adivine el número
printf("Adivina el número aleatorio entre 1 y 100: ");
scanf("%d", &intento);

// verificar si el número es correcto y dar pistas si es necesario
while (intento != numero_aleatorio) {
if (intento < numero_aleatorio) {
printf("Demasiado pequeño. Intente de nuevo: ");
scanf("%d", &intento);
} else {
printf("Demasiado grande. Intente de nuevo: ");
scanf("%d", &intento);
}
}

// si llega aquí, el número adivinado es correcto
printf("¡Correcto! El número aleatorio era %d.", numero_aleatorio);

return 0;
}

