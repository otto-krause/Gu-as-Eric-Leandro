#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    printf ("Ingrese un n�mero ");
    scanf ("%d",&a);
     printf ("Ingrese otro n�mero ");
    scanf ("%d",&b);
     printf ("Ingrese otro n�mero ");
    scanf ("%d",&c);
    if (a>b)
    {
       if (a>c)
       {
           printf ("No est�n ingresados de forma ascendente ");
       }
       else
       {
            printf ("No est�n ingresados de forma ascendente ");
       }
    }
       else
       {
           if (b>c)
           {
                printf ("No est�n ingresados de forma ascendente ");
           }
           else
           {
                printf ("Est�n ingresados de forma ascendente ");
           }
       }

    return 0;
}
