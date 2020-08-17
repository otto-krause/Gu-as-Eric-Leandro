#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   printf("Introduzca la calificaci%cn \n",162);
   ch= getchar();
   switch (ch)
   {
       case 'A':
       puts("Excelente");
       break;
       case 'B':
       puts("Buena");
       break;
       case 'C':
       puts("Regular");
       break;
       case 'D':
       puts("Suficiente");
       break;
       case 'F':
       puts("No suficiente");
       break;
   }

    return 0;
}
