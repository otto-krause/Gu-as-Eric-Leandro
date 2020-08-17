#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a=0, b=0, p=0, r=0;
    printf("ingrese un lado del rectángulo ");
    scanf("%d",&a);
    printf("ingrese el otro lado del rectángulo ");
    scanf("%d",&b);
    p=2*a+2*b;
    r=a*b;
    printf("El perimetro es %d",p);
    printf(" el área es %d",r);
    return 0;

    }
