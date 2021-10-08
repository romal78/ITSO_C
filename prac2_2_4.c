/*4 . Leer un número entre 1 y 12, imprimir su correspondiente mes del año y diga si es mes par o impar por ejm.: 
      si el número es 5, mostrar: “Mayo mes impar”. 
      Si el número leído no está en el rango imprimir “Fuera de rango” */
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
case 1:printf("enero");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
        
	break;
case 2:printf("febrero");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 3:printf("marzo");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 4:printf("abril");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 5:printf("mayo");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 6:printf("junio");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 7:printf("julio");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 8:printf("agosto");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 9:printf("septiembre");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 10:printf("octubre");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 11:printf("noviembre");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
case 12:printf("diciembre");
        if (x%2==0)
        {
            printf(" mes PAR...");/* code */
        }
        else
        {
            printf(" mes IMPAR...");/* code */
        }
	break;
default: printf("opcion incorrecta....");
}
 getch();
}
