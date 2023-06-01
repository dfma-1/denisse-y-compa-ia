#include<stdio.h>

//la tarifa debe ser menos a 1000//

int main()

{
  float gasto;
  float tarifa;
  

printf("ingresé la cantidad del primer gasto   ");
 scanf("%f",& gasto); 

if(gasto <1000) {
tarifa =1.2 ;
} else if(gasto>=1000 && 1850){
tarifa = 1.8; 
} else { 
 tarifa =2.1;
}
printf("la tarifa de luz para un gasto de  %.2f es %.2f\n",gasto ,tarifa );



   return 0;
}