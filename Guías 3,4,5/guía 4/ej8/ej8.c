#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0, p=0, n=0, cero=0, num=0;
for (i=1;i<=10;i++)
{
printf ("Ingrese el valor %d \n ",i );
scanf ("%d",&num);
if (num >0 )
{
    p=p+1 ;

}
else
{
    if (num <0 )
    {
        n=n+1;

    }
    else
    {
        cero=cero+1 ;
    }
}
}


printf ("Numeros positivos %d ,numero negativos %d y numeros ceros %d",p,n,cero);
    return 0;
}
