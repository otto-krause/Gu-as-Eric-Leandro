#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1=0, r2=0, r3=0, r4=0, r5=0, rt=0;
     printf ("Ingrese el valor de cinco resistencias \n ");
     scanf ("\n%d",&r1);
     scanf ("\n%d",&r2);
     scanf ("\n%d",&r3);
     scanf ("\n%d",&r4);
     scanf ("\n%d",&r5);
     rt=r1+r2+r3+r4+r5;
     printf("Las resistencias ingresadas son: \n%d \n%d \n%d \n%d \n%d",r1,r2,r3,r4,r5);
     printf( "\n La resistencia total es %d",rt);

     return 0;
}
