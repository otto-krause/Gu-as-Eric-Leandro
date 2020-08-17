#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0, m=0, s=0, uf=0;
    float cat1=0, cat2=0, cat3=0;
    printf ("Ingresar la hora ");
    scanf ("%d",&h);
     printf ("Ingresar los minutos ");
     scanf ("%d",&m);
      printf ("Ingresar los segundos ");
     scanf ("%d",&s);
     printf ("Ingresar la unidad final ");
     scanf ("%d",&uf);
     if (uf==1)
     {
         cat1=(h*3600)+(m*60)+s;
         printf ("en segundos son %f",cat1 );
     }

     else
     {
         if (uf==2)
         {
             cat2=(h*60)+m+(s/60);
             printf ("En minutos es %f",cat2);
         }
         else
         {
             if (uf==3)
             {
                 cat3=h+m/60+s/3600;
                 printf ("En horas es %f",cat3);
             }
         }

     }
     return 0;

}
