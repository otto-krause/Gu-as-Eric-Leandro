#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    printf ("Ingrese un numero ");
    scanf ("%d",&a);
    printf ("Ingrese otro numero ");
    scanf ("%d",&b);
    printf ("Ingrese otro numero ");
    scanf ("%d",&c);
    if ((a==b)&& (b==c))
    {
        printf ("Todos son iguales");
    }
    else
    {
        if ((a!=b) && (b!=c) && (a!=c))
        {
            printf ("Todos son diferentes ");
        }
        else
        {
            printf ("Dos iguales y uno distinto ");
        }
    }
    return 0;

}
