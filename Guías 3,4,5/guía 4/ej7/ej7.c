#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=0, a=0, num1=0, p=0 , uni=0, pg=0;
  for (a =1;a <21;a++)
  {
      p=0;
      uni=0;
  printf ("El vendedor: %d \n",a);
  printf ("Ingresar las unidades vendias  \n");

  for (i=1;i<16;i++)
  {
  printf (" venta del día  %d\n",i);
        scanf ("%d",&uni);
         p=p+uni;

  }

  pg=pg+p;
  printf ("EL total  de unidades vendidas  del vendedor  %d",a);
  printf (" es %d \n",p);
  }
  if (p > num1)
  {
        num1=p;
        i ++;
  }


printf("El total general es %d\n",pg);
printf ("El vendedor con mayor venta diaria tiene %d",num1);
return 0;
}
