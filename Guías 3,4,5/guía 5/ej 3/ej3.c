#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num,fecha;
   printf ("Introduzca el año :\n");
   scanf("%d",&fecha);
   printf("Introduzca un numero de mes del 1 al 12  :\n");
   scanf("%d",&num);
   switch (num)
   {
       case 1:
       puts("El mes de Enero tiene 31 días");
       break;
       case 2:
       if(fecha % 4 ==0 && fecha % 100 != 0 || fecha %400==0)
       puts("El mes de Febrero tiene 29 días");
       else
       puts ("El mes de Febrero tiene 28 días");
       break;
       case 3:
       puts("El mes de Marzo tiene 31 días");
       break;
       case 4:
       puts("El mes de Abril tiene 30 días");
       break;
       case 5:
       puts("El mes de Mayo tiene 31 días");
       break;
       case 6:
       puts("El mes de Junio tiene 30 días");
       break;
       case 7:
       puts("El mes de Julio tiene 31 días");
       break;
       case 8:
       puts("El mes de Agosto tiene 31 días");
       break;
       case 9:
       puts("El mes de Septiembre tiene 30 días");
       break;
       case 10:
       puts("El mes de Octubre tiene 31 días");
       break;
       case 11:
       puts("El mes de Noviembre tiene 30 días");
       break;
       case 12:
       puts("El mes de Diciembre tiene 31 días");
       break;
   }

    return 0;
}

