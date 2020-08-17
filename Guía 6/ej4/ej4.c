#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=1, f=1 , n=0;
    printf("Ingrese un numero del cual quieras factorear");
    scanf ("%d",&n);
while (i<=n)
       {

        f=f*i;
        i++;
       }
         printf (" El factorial del número %d es %d ",n,f);
         return 0;
       }
