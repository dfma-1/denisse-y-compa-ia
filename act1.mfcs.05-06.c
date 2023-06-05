//mfcs.05-06
//ejercicio 1
//editar y depurar  el ejercicio 1
//agregar una instruccion printf con el mensaje de se introdujo la variable despues de cada instruccion case
//describir la instruccion swich

#include <stdio.h>

int main ()
{
	int opcion;
	printf("Ingrese un número del 0 al 3: ");
	scanf("%d", &opcion);
	switch (opcion)
	{
		case 0:
	puts("cero");
	break;
	case 1:
	puts("uno");
	break;
	case 2:
	puts("dos");
	break;
	case 3:
		puts("tres");
		break;
		default:
			puts("fuera de rango");
			break;
	}
		return 0;
}
