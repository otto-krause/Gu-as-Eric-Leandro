#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a=0, imc=0, p=0;
    printf ("Ingrese su peso ");
    scanf ("%f",&p);
    printf ("Ingrese su altura ");
    scanf ("%f",&a);
    imc=p/(a*a);
    if (imc<20)
    {
        printf ("Su estado es bajo peso ");
    }
    else
    {
        if (imc<25)
        {
            printf ("Su estado es un peso ideal ");
        }
        else
        {
            if (imc>25)
            {
                printf ("Su estado es excedido ");
            }
        }
    }
    return 0;
}
