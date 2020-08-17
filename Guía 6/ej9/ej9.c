#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0, p=0, n=0,  num=0;
do
{

    printf ("Ingrese el sueldo %d \n ",i+1 );
scanf ("%d",&num);
i++;
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
while(i<4);
printf ("Las personas que ganan mas de 2000 son %d y las que no son %d",p,n);
    return 0;
}
