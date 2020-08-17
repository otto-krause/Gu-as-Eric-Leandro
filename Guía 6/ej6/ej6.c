#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i=1, a=1;
  float p=0 , nota=0, pg=0;
  do
  {
            p=0;
      nota=0;
  printf ("El alumno: %d \n",a);
  printf ("Ingresar las notas del alumno  \n");
  a++;
  i=1;
 do
 {
       printf (" nota %d\n",i);
        scanf ("%f",&nota);
        p=p+nota;
        i++;

 }
 while (i<11);



   p=p/10;
  pg=pg+p;
  printf ("EL promedio del alumno  es  ",a);
  printf (": %.2lf \n",p);
}
while (a<30);
pg=pg/30;
printf("El promedio general es %.2lf",pg);
return 0;
}


