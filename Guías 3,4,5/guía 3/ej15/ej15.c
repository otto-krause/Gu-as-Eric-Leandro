#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    printf ("Ingrese un número ");
    scanf ("%d",&a);
     printf ("Ingrese otro número ");
    scanf ("%d",&b);
     printf ("Ingrese otro número ");
    scanf ("%d",&c);
    if (a>b)
    {
       if (a>c)
       {
           printf ("No están ingresados de forma ascendente ");
       }
       else
       {
            printf ("No están ingresados de forma ascendente ");
       }
    }
       else
       {
           if (b>c)
           {
                printf ("No están ingresados de forma ascendente ");
           }
           else
           {
                printf ("Están ingresados de forma ascendente ");
           }
       }

    return 0;
}
