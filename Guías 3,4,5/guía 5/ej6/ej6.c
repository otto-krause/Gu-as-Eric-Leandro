#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num,fecha;
   printf ("Introduzca el día que naciste:\n");
   scanf("%d",&fecha);
   printf("Introduzca un numero de mes del 1 al 12  :\n");
   scanf("%d",&num);
   switch (num)
   {
       case 1:
       if ( fecha <21)
       printf ("Capricornio");
       else
       printf ("Acuario");
       break;
       case 2:
       if(fecha <21)
       printf ("Acuario");
       else
       printf ("Picis");
       break;
       case 3:
       if ( fecha <21)
       printf ("Picis");
       else
       printf ("Aries");
       break;
       case 4:
       if ( fecha <21)
       printf ("Aries");
       else
       printf ("Tauro");
       break;
       case 5:
       if ( fecha <22)
       printf ("Tauro");
       else
       printf ("Geminis");
       break;
       case 6:
       if ( fecha <22)
       printf ("Geminis");
       else
       printf ("Cancer");
       break;
       case 7:
       if ( fecha <23)
       printf ("Cancer");
       else
       printf ("Leo");
       break;
       case 8:
       if ( fecha <23)
       printf ("Leo");
       else
       printf ("Virgo");
       break;
       case 9:
       if ( fecha <24)
       printf ("Virgo");
       else
       printf ("Libra");
       break;
       case 10:
       if ( fecha <25)
       printf ("Libra");
       else
       printf ("Escorpio");
       break;
       case 11:
        if ( fecha <23)
       printf ("Escorpio");
       else
       printf ("Sagitario");
       break;
       case 12:
        if ( fecha <22)
       printf ("Sagitario");
       else
       printf ("Capricornio");
       break;
       default:
       printf ("Eror");
       break;
   }

    return 0;
}
