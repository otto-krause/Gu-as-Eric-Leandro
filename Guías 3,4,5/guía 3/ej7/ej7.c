#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0;
    printf ("Ingrese un número ");
    scanf ("%d",&a);
     printf ("Ingrese otro número ");
    scanf ("%d",&b);
    if (a==b)
    {
        printf ("Son iguales");
    }
    else
    {
        if (a>b)
        {
            printf ("El mayor es %d",a);
        }
        else
{
            printf ("El mayor es %d",b);
        }
    }
    return 0;
}
