#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad=0, d1=0, d2=0, d3=0, pr=0, in=0, imn=0, imtt=0;
    printf ("Ingrese la edad de la persona ");
    scanf ("%d",&edad);
    pr=20*50;
    in=pr*0.33;
    if (edad>60)
    {
        d1=pr*0.30;
        imn=pr+in-d1;
        imtt=pr-d1;
    }
    else
    {
        if (edad>50)
        {
            d2=pr*0.20;
            imn=pr+in-d2;
            imtt=pr-d2;
        }
        else
        {
         if (edad>70)
         {
             d3=pr*0.50;
             imn=pr+in-d3;
             imtt=pr-d3;
         }
        }
    }
    printf ("El importe total con impuestos es de $ %d",imn);
    printf(" y el importe sin impuestos es de $ %d",imtt);
    return 0;
}
