/* 6. Leer un número entre 1 y 7, imprimir su correspondiente día de la semana 
      (1 = lunes, etc), adicionalmente de tratarse de un día sábado o 
       Domingo imprimir “feliz fin de semana”.
*/
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
case 6:printf("SABADO.. FELIZ FIN DE SEMANA...");
	break;
case 7:printf("DOMINGO.. FELIZ FIN DE SEMANA...");
	break;
default: printf("opcion incorrecta....");
}
 getch();
}


