/* nombre: denisse benitez galindo
fecha:31 de mayo 2023
titulo: operadores de incremento dos*/

#include<stdio.h>

int main()
{
	/*post: esta despues de la variable e incrementa despues de esta*/
	/*pre: esta antes de la variable*/
	
 int n=5, t; /* las variables se definen*/
 t= ++n * --n; /*la variable t define el pre o post incremento*/
 printf("n= %d, t=%d\n",n,t); /*imprime el valor de "n" y "t" mas la suma que realizo el incremento*/
 printf("%d %d %d\n",++n,++n,++n); /*imprime el incremento que da "n"*/
 
 return 0; /*termina de ejecutar*/
}
