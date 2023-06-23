//mfcs
//proyecto version 3.1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACIENTES 10
#define MAX_NOMBRE 50
#define MAX_DIRECCION 100
#define MAX_MEDICAMENTOS 6
#define MAX_HABITACIONES 10

typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    char genero;
    char direccion[MAX_DIRECCION];
    char tipoSangre[5];
    int temperatura;
    int habitacionAsignada;
    int numMedicamentos;
    struct {
        char nombre[MAX_NOMBRE];
        int dosis;
        int frecuencia;
        char horario[50];
    } medicamentos[MAX_MEDICAMENTOS];
    float peso;
    float altura;
    float imc;
} Paciente;

typedef struct {
    int numero;
    int pacienteId;
} Cuarto;

void registrarDatos(Paciente *paciente) {
    printf("=== Registro de Datos ===\n");
    printf("Nombre: ");
    fgets(paciente->nombre, MAX_NOMBRE, stdin);
    paciente->nombre[strcspn(paciente->nombre, "\n")] = '\0';

    printf("Edad: ");
    scanf("%d", &(paciente->edad));
    getchar();

    printf("Genero (M/F): ");
    scanf(" %c", &(paciente->genero));
    getchar();

    printf("Direccion: ");
    fgets(paciente->direccion, MAX_DIRECCION, stdin);
    paciente->direccion[strcspn(paciente->direccion, "\n")] = '\0';

    printf("Tipo de sangre: ");
    fgets(paciente->tipoSangre, 5, stdin);
    paciente->tipoSangre[strcspn(paciente->tipoSangre, "\n")] = '\0';
    
    printf("Temperatura: ");
    scanf("%d", &(paciente->temperatura));
    getchar();

    printf("Peso (kg): ");
    scanf("%f", &(paciente->peso));
    getchar();

    printf("Altura (m): ");
    scanf("%f", &(paciente->altura));
    getchar();

    paciente->imc = paciente->peso / (paciente->altura * paciente->altura);

    printf("Datos registrados con exito.\n\n");
}

void mostrarDatos(Paciente paciente) {
    printf("=== Datos del Paciente ===\n");
    printf("Nombre: %s\n", paciente.nombre);
    printf("Edad: %d\n", paciente.edad);
    printf("Genero: %c\n", paciente.genero);
    printf("Direccion: %s\n", paciente.direccion);
    printf("Tipo de sangre: %s\n", paciente.tipoSangre);
    printf("Habitacion asignada: %d\n", paciente.habitacionAsignada);
    printf("Peso: %.2f kg\n", paciente.peso);
    printf("Altura: %.2f m\n", paciente.altura);
    printf("IMC: %.2f\n", paciente.imc);
    
    if (paciente.imc < 18.5) {
        printf("Estado: Bajo peso\n");
    } else if (paciente.imc < 25.0) {
        printf("Estado: Peso normal\n");
    } else if (paciente.imc < 30.0) {
        printf("Estado: Sobrepeso\n");
    } else {
        printf("Estado: Obesidad\n");
    }
    
    printf("Temperatura: %d\n", paciente.temperatura);
    if (paciente.temperatura < 37) {
        printf("Temperatura normal\n");
    } else if (paciente.temperatura > 37) {
        printf("Está enfermo \n");
    }

    printf("Medicamentos:\n");
    for (int i = 0; i < paciente.numMedicamentos; i++) {
        printf("Nombre del medicamento: %s\n", paciente.medicamentos[i].nombre);
        printf("Dosis: %d\n", paciente.medicamentos[i].dosis);
        printf("Frecuencia: cada %d horas\n", paciente.medicamentos[i].frecuencia);

        int horas = 24 / paciente.medicamentos[i].frecuencia;
        printf("Horario de toma: ");
        for (int j = 0; j < horas; j++) {
            int hora = j * paciente.medicamentos[i].frecuencia;
            printf("%d:00 ", hora);
        }

        printf("\n\n");
    }
}

void relacionarCuarto(Paciente *paciente, Cuarto *cuarto) {
    printf("=== Relacionar al Paciente con un Cuarto ===\n");
    printf("Numero de Cuarto: ");
    scanf("%d", &(cuarto->numero));
    cuarto->pacienteId = paciente->edad;

    if (cuarto->numero > MAX_HABITACIONES) {
        printf("¡Error! Numero de habitacion invalido.\n\n");
        return;
    }

    paciente->habitacionAsignada = cuarto->numero;
    getchar();

    printf("El paciente ha sido relacionado con el cuarto numero %d.\n\n", cuarto->numero);
}

void relacionarMedicamento(Paciente *paciente, int numMedicamentos) {
    if (numMedicamentos <= MAX_MEDICAMENTOS) {
        printf("=== Relacionar al Paciente con Medicamentos ===\n");
        paciente->numMedicamentos = numMedicamentos;

        for (int i = 0; i < numMedicamentos; i++) {
            printf("Nombre del medicamento %d: ", i + 1);
            fgets(paciente->medicamentos[i].nombre, MAX_NOMBRE, stdin);
            paciente->medicamentos[i].nombre[strcspn(paciente->medicamentos[i].nombre, "\n")] = '\0';

            printf("Dosis del medicamento %d: ", i + 1);
            scanf("%d", &(paciente->medicamentos[i].dosis));
            getchar();

            printf("Frecuencia del medicamento %d (en horas): ", i + 1);
            scanf("%d", &(paciente->medicamentos[i].frecuencia));
            getchar();

            printf("\n");
        }

        printf("El paciente ha sido relacionado con %d medicamento(s).\n\n", numMedicamentos);
    } else {
        printf("¡Error! Se ha excedido el numero maximo de medicamentos (%d).\n\n", MAX_MEDICAMENTOS);
    }
}

int main() {
    Paciente pacientes[MAX_PACIENTES];
    Cuarto cuarto;
    int opcion;
    int numPacientes = 0;
    int numMedicamentos;

    do {
        printf("=== HOSPITAL GENERAL ===\n");
        
        printf("=== Sistema de Registro de Pacientes ===\n");
        printf("1. Registrar Datos\n");
        printf("2. Mostrar Datos\n");
        printf("3. Relacionar al Paciente con un Cuarto\n");
        printf("4. Relacionar al Paciente con Medicamentos\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
            case 1:
                if (numPacientes < MAX_PACIENTES) {
                    registrarDatos(&pacientes[numPacientes]);
                    numPacientes++;
                } else {
                    printf("¡Error! Se ha alcanzado el maximo numero de pacientes.\n\n");
                }
                break;
            case 2:
                if (numPacientes > 0) {
                    int i;
                    printf("=== Lista de Pacientes ===\n");
                    for (i = 0; i < numPacientes; i++) {
                        printf("%d. %s\n", i + 1, pacientes[i].nombre);
                    }
                    printf("Selecciona un paciente: ");
                    scanf("%d", &i);
                    getchar();

                    if (i >= 1 && i <= numPacientes) {
                        mostrarDatos(pacientes[i - 1]);
                    } else {
                        printf("¡Error! Paciente no valido.\n\n");
                    }
                } else {
                    printf("No hay pacientes registrados.\n\n");
                }
                break;
            case 3:
                if (numPacientes > 0) {
                    int i;
                    printf("=== Lista de Pacientes ===\n");
                    for (i = 0; i < numPacientes; i++) {
                        printf("%d. %s\n", i + 1, pacientes[i].nombre);
                    }
                    printf("Selecciona un paciente: ");
                    scanf("%d", &i);
                    getchar();

                    if (i >= 1 && i <= numPacientes) {
                        relacionarCuarto(&pacientes[i - 1], &cuarto);
                    } else {
                        printf("¡Error! Paciente no valido.\n\n");
                    }
                } else {
                    printf("No hay pacientes registrados.\n\n");
                }
                break;
            case 4:
                if (numPacientes > 0) {
                    int i;
                    printf("=== Lista de Pacientes ===\n");
                    for (i = 0; i < numPacientes; i++) {
                        printf("%d. %s\n", i + 1, pacientes[i].nombre);
                    }
                    printf("Selecciona un paciente: ");
                    scanf("%d", &i);
                    getchar();

                    if (i >= 1 && i <= numPacientes) {
                        printf("Numero de medicamentos a relacionar: ");
                        scanf("%d", &numMedicamentos);
                        getchar();

                        relacionarMedicamento(&pacientes[i - 1], numMedicamentos);
                    } else {
                        printf("¡Error! Paciente no valido.\n\n");
                    }
                } else {
                    printf("No hay pacientes registrados.\n\n");
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Por favor, intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}