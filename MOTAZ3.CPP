#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
//clrscr();
int x;
printf("\nIngresar la opcion:");
scanf("%d",&x);
switch(x)
{
case 1:printf("lunes");
	break;
case 2:printf("martes");
	break;
case 3:printf("miercoles");
	break;
case 4:printf("jueves");
	break;
case 5:printf("viernes");
	break;
case 6:printf("sabado");
	break;
case 7:printf("domingo");
	break;
default: printf("opcion incorrecta....");
}
 getch();
}


