/* DAIRA ANIELA HERNANDEZ SILVA
fecha:02.06.23
ejercicio: 7*/
#include <stdio.h>
int main (){
int a, b, c;
printf ("ingresa el valor de a:");
scanf ("%d", &a);
printf ("ingresa el valor de b:");
scanf ("%d", &b);
printf ("ingresa el valor de c:");
scanf ("%d", &c);

if (a>0){
if (b>0)  {
 ++a;
} else if (c>0) {
if (a<5){ 
  ++b;
}else if (b<5){
     ++c;
 } else{
     --a;
}else if (c<5){
    
 --b;
}else {
    --c;
}
}else {
a = 0;
}
printf("el valor de a es : %d\n", a);
printf("el valor de b es : %d\n", b);
printf("el valor de c es : %d\n", c);
return 0;
}