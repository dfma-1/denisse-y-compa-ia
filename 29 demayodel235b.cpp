/*programa numero 
titulo:en el siguiente codigo Q es un a varible global  por estar definida fuera de las funciones y es
accesible desde todas las sentencias . sin embargo las definiciones  dentro del main, como A 
son locales a main;por consiguiente,solo las senrencias anteriores a main  pueden utilizar a
fecha
nombre.Miriam Alavrez*/
 #include <stdio.h>
 int Q;
 int resultado1;
 int resultado2;
 int main ()

{
	int A;
	A=124; Q=1;
	resultado1=A+Q;
	printf("r1:%d\n",resultado1);
	
	{
		int B;
		int resultado3;
		B= 124;
		A= 457;
		Q= 2;
		resultado2=A+B+Q;
		printf("r1a:%d\n",resultado1);
		printf("r1b:%d\n",resultado2);	
		{
			
			int C;
			C=124;
			int B;
			B=457;
			A=788;
			Q=3;
			resultado3=A+B+Q+C;
			printf("r3:%d\n",resultado3);
			return 0;
		    }
	}
}



