/*¨programa 
titulo:operador de asignacion = ( igual)
fecha:31 de mayo 
Nombre:Miriam alvarez */
 
 #include <stdio.h>
 
 int main ()
 
 {
 	int  a,b,c;
 	int  codigo, fahrenheit, coord_x,coord_y;
 	codigo= 3467;
 	fahrenheit= 123.456;
 	coord_x=725;
 	a=b=c=45; // se le signa a las varibles a,b,ce //
 	a=(b=(c=45)); ////se leasignaa a las varibles a,b,c,el////
 	
 	printf ("%i valor de la varible ´codigo´ \n", codigo);
 	printf ("%i valor de la variable ´fahrenheit´\n",fahrenheit);
 	printf ("%i valor de las varible ´coord´\n",coord_x);
 	printf ("%i valor de la variable ´cooord´\n",coord_y);
 	printf ("%i valor de la varible  ´a´\n",a);
 	printf ("%i valor de la varible   ´b´\n",b);
 	printf ("%i valor de la varible   ´c´\n",c);
 	
 	
 }
