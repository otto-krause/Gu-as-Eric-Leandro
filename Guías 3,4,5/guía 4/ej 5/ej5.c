#include <stdio.h>
#include <stdlib.h>


int main ()
{
int i=0, n1=0, n2=0, r=1;
printf ("Ingrese el primer numero  \n ");
scanf ("%d",&n1);
printf ("Ingrese el segundo numero  \n ");
scanf ("%d",&n2);
for (i=1;i<=n2;i++)
{
r=r*n1;
}
printf ("resultado es: %d",r);
return 0;
}
