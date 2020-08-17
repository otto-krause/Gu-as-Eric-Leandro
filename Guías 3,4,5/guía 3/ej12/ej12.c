#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0, p1=0, p2=0;
    float s=0,  s1=0,  s2=0, d1=0, d2=0, d3=0;

    printf ("Ingrese la superficie y población del país 1 \n");

    scanf ("\n%f",&s);
    scanf ("\n%d",&p);
    printf ("Ingrese el nombre ,la superficie y población del país 2 \n");

    scanf ("\n%f",&s1);
    scanf ("\n%d",&p1);
    printf ("Ingrese el nombre ,la superficie y población del país 3\n");

    scanf ("\n%f",&s2);
    scanf ("\n%d",&p2);
    d1=p/s;
    d2=p1/s1;
    d3=p2/s2;
    if ((d1>d2) && (d1>d3))
    {
        printf("El primer país es el más densamente poblado");
    }
    else
    {
        if ((d2>d1)&&(d2>d3))
    {
        printf("El segundo país es el más densamente poblado");
    }
    else

{
    if ((d3>d1)&&(d3>d2))
    {
        printf("El tercer país es el más densamente poblado");
    }
}
}


    return 0;
    }
