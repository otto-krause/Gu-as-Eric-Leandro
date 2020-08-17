#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p=0, f=0, s=0;
    printf ("Ingrese la fuerza ");
    scanf ("%f",&f);
    printf ("Ingrese la superficie ");
    scanf ("%f",&s);
    p=f/s;
    printf ("La presión es %f",p);
    return 0;
}
