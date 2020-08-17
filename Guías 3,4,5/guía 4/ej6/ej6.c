#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=0, a=0;
  float p=0 , nota=0, pg=0;
  for (a =1;a <31;a++)
  {
      p=0;
      nota=0;
  printf ("El alumno: %d \n",a);
  printf ("Ingresar las notas del alumno  \n");
  for (i=1;i<11;i++)
  {
  printf (" nota %d\n",i);
        scanf ("%f",&nota);
        p=p+nota;

  }
  p=p/10;
  pg=pg+p;
  printf ("EL promedio del alumno es  %d",a);
  printf (": %.2lf \n",p);
}
pg=pg/30;
printf("El promedio general es %.2lf",pg);
return 0;
}
