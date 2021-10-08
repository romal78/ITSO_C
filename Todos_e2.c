/* Ejercicio 2 (condicional MÚLTIPLE case). Leer un numero entre 1 y 4, imprimir su correspondiente estación 
   de el año: Ej. x = 2   imprimir verano.*/

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
case 1:printf("PRIMAVERA");
	break;
case 2:printf("VERANO");
	break;
case 3:printf("OTOÑO");
	break;
case 4:printf("INVIERNO");
	break;
default: printf("opcion incorrecta....");
}
 getch();
}


