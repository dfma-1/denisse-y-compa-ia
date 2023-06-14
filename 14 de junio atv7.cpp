#include<stdio.h>

int cuadrados(int n )

{
	int q=0;
	while (q<=1000)	{
		q=n*n;
		printf("el cuadrado de: %d es %d\n",n,q);
		n++;
	}
	return 0;
	
}


int main(){
	int num=0;
  cuadrados(num);
  return 0;
  	
   }
