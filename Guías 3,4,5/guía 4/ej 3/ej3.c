#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=1, a=0, b=0, num=0;
printf ("Ingresar el valor 1 \n  ");
scanf ("%d",&a);
printf ("Ingresar el valor 2 \n");
scanf ("%d",&b);
if (a<b)
{
    i=a +1;
    printf ("Los números intermedios de %d y %d son : \n",a,b);
    do
    {
        printf ("%d \n ",i);
        i++;
    }
    while(i<b);
}
    else
    {
        if (b<a)
        {
            i=b+1;
            printf ("Los números intermedios de %d y %d son : \n",b,a);
            do
            {
                printf("%d\n",i);
                i++;
            }
            while(i<a);
        }
    }
    return 0;
}
