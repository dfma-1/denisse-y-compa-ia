//fecha:5 de junio del 2023
//nombre:miriam alvarez 
//edigtar y depurar el jercicio 2 y describir la variante en el uso del case 


#include<stdio.h>

int main (){
	int opcion;
	printf("ingrese un numero:");
	scanf("%i",&opcion);
	
	switch (opcion){
	
		
		case 0:
		case 1:
		case 2:
			
			printf("menor de tres .....");
			break;
			case 3:
				
		puts ("igual a tres ");
		break;
		default:
			puts("fuera de rango ");
				
		
	}
	return 0;
	
	
}

