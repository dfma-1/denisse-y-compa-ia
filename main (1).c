/*dairaaniela*/
/*dairaaniela*/
#include <stdio.h>
int main(){

int a [10] ={10,1,2,-3,-100,1000,-200,7,1,0};
int maximo= a[0],index=0;
for (int i=1;i<10;i++){
    If (a[i]>maximo){
        maximo=a[i];
        index=i;
    }
}
printf("el numero maximo del arreglo es:%d\n",maximo);
printf("se encuentra en la posicion:%d\n",index);

return 0;
}