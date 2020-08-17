#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=0, a=1, num1=0, p=0 , uni=0, pg=0;
do
      {

      uni=0;
  printf ("El vendedor: %d \n",a);
  printf ("Ingresar las unidades vendidas  \n");
a++;
i=0;
p=0;
do
    {
      printf (" venta del día  %d\n",i+1);
        scanf ("%d",&uni);
         p=p+uni;

  if (p > num1)

        num1=p;
        i ++;

}
while(i<15);

pg=pg+p;

  printf ("EL total  de unidades vendidas  del vendedor  %d",a-1);
  printf (" es %d \n",p);
       }
while (a<21);





printf("El total general es %d\n",pg);
printf ("El vendedor con mayor venta diaria tiene %d",num1);
return 0;
}
