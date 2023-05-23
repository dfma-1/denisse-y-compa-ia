#include <stdio.h>

#define NUM_ALUMNOS 5
#define NUM_MATERIAS 5

void calcularPromedio(float *calificaciones, float *promedios) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        float suma = 0;
        for (int j = 0; j < NUM_MATERIAS; j++) {
            suma += *(calificaciones + i * NUM_MATERIAS + j);
        }
        *(promedios + i) = suma / NUM_MATERIAS;
    }
}

int main() {
    float calificaciones[NUM_ALUMNOS][NUM_MATERIAS];
    float promedios[NUM_ALUMNOS];

    printf("Ingrese las calificaciones de los alumnos:\n");

    // Obtener las calificaciones
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        for (int j = 0; j < NUM_MATERIAS; j++) {
            printf("Materia %d: ", j + 1);
            scanf("%f", &calificaciones[i][j]);
        }
    }

    // Calcular los promedios
    calcularPromedio(&calificaciones[0][0], &promedios[0]);

    // Mostrar los promedios
    printf("\nPromedios:\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedios[i]);
    }

    return 0;
}