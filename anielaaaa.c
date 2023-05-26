/*programa numero
    titulo
    fecha
    nombre: aniela*/

    #include<stdio.h>
    #include<string.h>

int main ()
{

	char mensaje[20];
	strcpy(mensaje, "Atapuerca\n");
	/* copia un mensaje en un array de caracteres
las dos lineas anteriores tambien se pueden sustituir

 char mensaje[20]= "Atapuerca\n"; */

	printf(mensaje);
	

	return 0;

}