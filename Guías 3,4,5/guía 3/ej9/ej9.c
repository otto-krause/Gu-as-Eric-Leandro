#include <stdio.h>
#include <stdlib.h>

int main()
{


int h=0, s=0;
char cat=' ';
printf ("Ingrese las horas trabajadas ");
scanf ("%d",&h);
printf ("Ingrese la categoría ");
scanf ("%c",&cat);
if (cat=="A")
{
    s=h*200;
    printf ("El sueldo es %d",s);
}
else
{
    if (cat=="B")
{


    s=h*180;
    printf ("El sueldo es %d",s);
}
else
{
    if (cat=="C")
    {
        s=h*150;
        printf("El sueldo es %d",s);
    }
    else
{


        printf("El sueldo es 0");
}

}
}
return 0;
}

