#include <stdio.h>
#include <stdlib.h>


int main ()
{
int i=1, n1=0, n2=0, r=1;
printf ("Ingrese el primer numero  \n ");
scanf ("%d",&n1);
printf ("Ingrese el segundo numero  \n ");
scanf ("%d",&n2);
while (i<=n2)
{
    r=r*n1;
    i++;
}
printf ("resultado es: %d",r);
return 0;
}
