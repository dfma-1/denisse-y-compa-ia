#include <stdio.h>

struct Paciente {
    char nombre[50];
    int edad;
    float peso;
    float estatura;
    char enfermedad[100];
    char horaRegistro[10];
};

int main() {
    struct Paciente pacientes[100];
    int numPacientes = 0;
    int opcion;

    do {
        printf("Bienvenido al hospital 'Angeles'\n");
        printf("Selecciona una opcion por favor: \n");
        printf("[1] Ingresar datos de un paciente\n");
        printf("[2] Ver cantidad de meddicamentos\n");
        printf("[0] Salir\n");
        printf("-> ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nRegistro de paciente\n");
                printf("--------------------\n");

                printf("Nombre: ");
                scanf(" %[^\n]", pacientes[numPacientes].nombre);

                printf("Edad: ");
                scanf("%d", &pacientes[numPacientes].edad);

                printf("Peso: ");
                scanf("%f", &pacientes[numPacientes].peso);

                printf("Estatura: ");
                scanf("%f", &pacientes[numPacientes].estatura);

                printf("Enfermedad o padecimiento: ");
                scanf(" %[^\n]", pacientes[numPacientes].enfermedad);

                printf("Hora de registro (formato HH:MM): ");
                scanf(" %[^\n]", pacientes[numPacientes].horaRegistro);

                numPacientes++;

                // Verificar si se desea registrar otro paciente
                char respuesta;
                printf("¿Desea registrar otro paciente? (S/N): ");
                scanf(" %c", &respuesta);

                if (respuesta != 'S' && respuesta != 's') {
                    opcion = 0;  // Salir del programa
                }

                break;
            case 2:
                if (numPacientes == 0) {
                    printf("No se han registrado pacientes.\n");
                } else {
                    int numeroPaciente;
                    printf("\nVer cantidad de medicamentos\n");
                    printf("-----------------------------\n");
                    printf("Ingrese el numero de paciente (1-%d): ", numPacientes);
                    scanf("%d", &numeroPaciente);

                    if (numeroPaciente < 1 || numeroPaciente > numPacientes) {
                        printf("Numero de paciente invalido.\n");
                    } else {
                        int cantidadMedicamentos = numeroPaciente * 2;
                        printf("El paciente número %d requiere %d medicamentos.\n", numeroPaciente, cantidadMedicamentos);
                    }
                }
                break;
            case 0:
                printf("¡Regrese pronto!<3...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, seleccione una opcion valida.\n");
        }

        printf("\n");

    } while (opcion != 0);

    printf("Datos de los pacientes registrados:\n");
    printf("----------------------------------\n");
    for (int i = 0; i < numPacientes; i++) {
        printf("Paciente %d\n", i + 1);
        printf("Nombre: %s\n", pacientes[i].nombre);
        printf("Edad: %d\n", pacientes[i].edad);
        printf("Peso: %.2f\n", pacientes[i].peso);
        printf("Estatura: %.2f\n", pacientes[i].estatura);
        printf("Enfermedad o padecimiento: %s\n", pacientes[i].enfermedad);
        printf("Hora de registro: %s\n", pacientes[i].horaRegistro);
        printf("--------------------\n");
    }

    return 0;
}

