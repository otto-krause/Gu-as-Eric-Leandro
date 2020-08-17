#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0, m=0;
   float pf=0;
    printf ("Ingresar la cantidad total de personas ");
    scanf ("%d",&t);
    printf ("Ingresar la cantidad de mujeres ");
    scanf ("%d",&m);
    pf=m*100/t;
    printf ("El porcentaje de mujeres es %f",pf);
    printf(" y el porcentaje de hombres es %f",100-pf);
    return 0;
}
