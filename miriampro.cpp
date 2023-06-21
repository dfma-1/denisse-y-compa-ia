
//miriam lavrez aguilar
//proyecto 
//fecha 21 de junio


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  almacenar los datos del paciente
typedef struct {
    char nombre[50];
    int edad;
    int cuarto;
    char medicamentos[8][50];
    char horarios[8][10];
} Paciente;

int main() {
    Paciente pacientes[10];// almacenar los datos
    int i;
    char opcion[3];
    int cuartos_ocupados[12] = {0}; // cuartos ocupados

    for (i = 0; i < 10; i++) {
        printf("Registro de Paciente #%d\n", i + 1);

        printf("Ingrese el nombre del paciente: ");
        scanf("%s", pacientes[i].nombre);

        printf("Ingrese la edad del paciente: ");
        scanf("%d", &pacientes[i].edad);

        // cuarto asignado 
        printf("Ingrese el número del cuarto asignado (1-12): ");
        scanf("%d", &pacientes[i].cuarto);

        // Verificar si el cuarto ya está ocupado
        while (cuartos_ocupados[pacientes[i].cuarto - 1] == 1) {
            printf("El cuarto ya está ocupado. Ingrese otro número de cuarto: ");
            scanf("%d", &pacientes[i].cuarto);
        }

        cuartos_ocupados[pacientes[i].cuarto - 1] = 1; // Marcar cuarto como ocupado

        printf("Ingrese los nombres de los 8 medicamentos y sus horarios:\n");
        for (int j = 0; j < 8; j++) {
            printf("Medicamento #%d: ", j + 1);
            scanf("%s", pacientes[i].medicamentos[j]);

            printf("Horario #%d: ", j + 1);
            scanf("%s", pacientes[i].horarios[j]);
        }

        printf("¿Desea continuar registrando otro paciente? (s/n): ");
        scanf("%s", opcion);

        if (strcmp(opcion, "n") == 0) {
            break;
        }
    }

    printf("\n--- Listado de Pacientes ---\n");
    for (int j = 0; j <= i; j++) {
        printf("Paciente #%d\n", j + 1);
        printf("Nombre: %s\n", pacientes[j].nombre);
        printf("Edad: %d\n", pacientes[j].edad);
        printf("Cuarto: %d\n", pacientes[j].cuarto);
        printf("Medicamentos:\n");
        for (int k = 0; k < 8; k++) {
            printf("%s - %s\n", pacientes[j].medicamentos[k], pacientes[j].horarios[k]);
        }
        printf("\n");
    }

    return 0;
}

