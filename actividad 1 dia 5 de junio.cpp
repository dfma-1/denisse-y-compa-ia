//fecha:5 de junio del 2023
// nombre:miriam alvarez aguilar 
//actividad:editar y depurara el ejercicio 1, agregar una instruccion prin con el mensaje de se introdujo la bariable 
// despues de cada instrucuin case, describir  de la accion swich

#include<stdio.h>

int main ()
{
	int opcion;
		
		printf("ingresar un numero del 0 al 3");
		scanf("%d",&opcion);
		switch( opcion)
		{
		case 0:
		 puts("Cero");
		 break;
		 
		 case 1:
		 puts ("uno");
		 break;
		 
		case 2:
		  puts("dos");
		  break;
		  
		case 3:
		  puts ("tres");
		  break;
		  
		default:
			puts("fuera de rango");
	}
	return 0;
}
