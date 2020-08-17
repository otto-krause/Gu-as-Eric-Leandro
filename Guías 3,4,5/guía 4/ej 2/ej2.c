#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1 , num1=0, num2=0, a=0;
    while (i < 16)
    {
        printf ("Ingrese un valor \n");
        scanf ("%d",&num2);
         a=a+num2;

        if (num2 > num1)
        num1=num2;
        i ++;
    }
    printf ("El numero mayor es %d \n ", num1);
    printf ("EL promedio es %d",a/15);
    return 0;
}
