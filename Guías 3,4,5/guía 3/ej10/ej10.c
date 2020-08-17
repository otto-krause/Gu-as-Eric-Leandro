#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sb=0, h=0, cat=0, t=0, ad=0;
    printf ("Ingrese el sueldo básico ");
    scanf ("%d",&sb);
    printf ("Ingrese la categoría ");
    scanf ("%d",&cat);
    printf ("Ingrese la cantidad de hijos ");
    scanf ("%d",&h);
    if (h>4)
    {
        t=300*h+200;
    }
    else
    {
        t=300*h;
    }
    if (cat==1)
    {
        ad=10*sb/100;
    }
    else
    {
        if (cat==2)
        {
            ad=20*sb/100;
        }
    else
    {
        ad=0;
    }
    }
    printf ("El sueldo básico más el adicional es %d",sb+ad);
    printf (" y el bono por hijo %d",t);
    return 0;
    }
