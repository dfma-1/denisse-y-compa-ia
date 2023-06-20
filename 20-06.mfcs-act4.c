#include <math.h>
int main ()
{
    int exponente;
    double d,y;
    printf("\n ceil (3.7)= %1f \t\t ceil (3.4)= %1f", ceil (3.7),ceil(3.4));
    printf("\n ceil (-3.7)= %1f \t\t ceil (-3.4)= %1f", ceil (-3.7),ceil(-3.4));
    printf("\n floor (3.7)= %1f \t\t floor(3.4)= %1f", floor (3.7),floor(3.4));
    printf("\n floor(-3.7)= %1f \t\t floor(-3.4)= %1f", floor(-3.7),ceil(-3.4));
    printf("\n fmod(5.6,2.5)= %1f \t\t fmod(-5.6,2.5)= %1f", fmod (5.6,2.5),fmod(-5.6,2.5));
    d=frexp(16.0, &exponente);
    d=modf(-17.365,&y);
    printf("\n Parte decimal de -17.365= %1f",d);
    printf("\n Parte entera de -17.365= %1f",y );
    return 0;
    }