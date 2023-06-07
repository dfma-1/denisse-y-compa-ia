#include<stdio.h>
int main ()

/*entradqa de datos numericos centinela -1*/


	{
		int const centinela=-1;
		int suma,cuenta,nota;
		printf ("introduzca la primera nota ");
		scanf("%d",&nota);
		while (nota!=centinela)
		
		{
			cuenta++;
			suma  +=nota;
			printf("introduzca la siguinte nota ");
			scanf("%d",&nota);
			//fin de while 
		}
		
		return 0;
	}
