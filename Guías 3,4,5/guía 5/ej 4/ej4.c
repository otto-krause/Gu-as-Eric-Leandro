#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num=0;
   printf("Introduzca un numero del 1 al 7  \n");
   scanf("%d",&num);
   switch (num)
   {
       case 1:
       puts("Lunes");
       break;
       case 2:
       puts("Martes");
       break;
       case 3:
       puts("Miércoles");
       break;
       case 4:
       puts("Jueves");
       break;
       case 5:
       puts("Viernes");
       break;
       case 6:
       puts("Sábado");
       break;
       case 7:
       puts("Domingo");
       break;
   }

    return 0;
}
