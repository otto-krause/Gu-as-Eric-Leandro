#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0, p=0, n=0,  num=0;
for (i=1;i<=20;i++)
{
printf ("Ingrese el sueldo %d \n ",i );
scanf ("%d",&num);
if (num >=2000 )
{
    p=p+1 ;

}
else
{
    if (num <2000 )
    {
        n=n+1;

    }

}
}


printf ("Las personas que ganan más de 2000 son %d y las que no son %d",p,n);
    return 0;
}
