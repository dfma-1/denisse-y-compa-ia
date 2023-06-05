/*/*SENTENCIA SWITCH /DAIRA ANIELA HERNANDEZ SILVA
 * fecha 05.06.23
 * editar y depurar el siguiente ejercicio
 * agregar una instruccion printf con el mensaje "se introdujo la variable" 
 * describir la estructura en la opcion switch */
 #include <stdio.h>
 int main () {
     int opcion;
     
      printf ("introduzca un numero");
     scanf ("%d" , &opcion);
   
    
     switch (opcion) {
     case 0:
     printf("se introdujo la variable\n");
       puts("cero");
       break;
     case 1:
      printf("se introdujo la variable\n");
       puts("uno");
       break;
     case 2:
      printf("se introdujo la variable\n");
       puts("dos");
       break;
     case 3:
      printf("se introdujo la variable\n");
       puts("tres");
       break;
     default:
       puts ("fuera de rango");
    }
    return 0;
 }
 