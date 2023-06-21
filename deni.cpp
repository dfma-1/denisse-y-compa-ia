#include <stdio.h>
#include <stdbool.h>

struct Paciente {
    char nombre[50];
    int edad;
    float peso;
    float estatura;
    char genero[10];
    char enfermedad[100];
    char horaRegistro[10];
};

void verDatosPaciente(struct Paciente paciente) {
    printf("\nDatos del paciente\n");
    printf("------------------\n");
    printf("Nombre: %s\n", paciente.nombre);
    printf("Edad: %d\n", paciente.edad);
    printf("Peso: %.2f\n", paciente.peso);
    printf("Estatura: %.2f\n", paciente.estatura);
    printf("Genero: %s\n",paciente.genero);
    printf("Enfermedad o padecimiento: %s\n", paciente.enfermedad);
    printf("Hora de registro: %s\n", paciente.horaRegistro);
    printf("--------------------\n");
}

int main() {
    struct Paciente pacientes[100];
    int numPacientes = 0;
    int opcion;

    do {
        printf("Bienvenido al hospital 'Angeles'\n");
        printf("Selecciona una opcion por favor: \n");
        printf("[1] Ingresar datos de un paciente(OBLIGATORIO)\n");
        printf("[2] Ver cantidad de medicamentos\n");
        printf("[3] Ver datos de un paciente\n");
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

                printf("Genero: ");
                scanf("%s", &pacientes[numPacientes].genero);
                
                printf("Enfermedad o padecimiento: ");
                scanf(" %[^\n]", pacientes[numPacientes].enfermedad);

                printf("Hora de registro (formato HH:MM): ");
                scanf(" %[^\n]", pacientes[numPacientes].horaRegistro);

                numPacientes++;

                char respuesta;
                printf("¿Desea registrar otro paciente? (S/N): ");
                scanf(" %c", &respuesta);

                if (respuesta != 'S' && respuesta != 's') {
                    opcion = 0;  
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
                        printf("El paciente numero %d requiere %d medicamentos.\n", numeroPaciente, cantidadMedicamentos);
                    }
                }
                break;
            case 3:
                if (numPacientes == 0) {
                    printf("No se han registrado pacientes.\n");
                } else {
                    int numeroPaciente;
                    printf("\nVer datos de un paciente\n");
                    printf("-------------------------\n");
                    printf("Ingrese el numero de paciente (1-%d): ", numPacientes);
                    scanf("%d", &numeroPaciente);

                    if (numeroPaciente < 1 || numeroPaciente > numPacientes) {
                        printf("Numero de paciente inválido.\n");
                    } else {
                        verDatosPaciente(pacientes[numeroPaciente - 1]);
                    }
                }
                break;
            case 0:
                printf("?Regrese pronto!<3...\n");
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
        printf("genero: %s\n",pacientes[i].genero);
        printf("Enfermedad o padecimiento: %s\n", pacientes[i].enfermedad);
        printf("Hora de registro: %s\n", pacientes[i].horaRegistro);
        printf("--------------------\n");
    }

    return 0;
}

