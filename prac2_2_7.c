/*Leer un número entre 1 y 20 mismo corresponde al número de ficha en la 
  CNS (10 en la mañana de 8 a 12 y 10 en la tarde de 14 a 18 pm), 
  si la atención por paciente es de 24 minutos por ficha, mostrar el turno 
  y la hora en que será atendido (usar selección múltiple para los horarios).
    8:00 - 8:24
    8:24 -  
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
//clrscr();
int x;
char turno;
printf("\nFicha 1");
printf("\nFicha 2");
printf("\nFicha 3");
printf("\nFicha 4");
printf("\nFicha 5");
printf("\nFicha 6");
printf("\nFicha 7");
printf("\nFicha 8");
printf("\nFicha 9");
printf("\nFicha 10");
printf("\nIngresar el turno [M][T]:");
scanf("%c",&turno);
printf("\nIngresar la opcion:");
scanf("%d",&x);
switch(x)
{
case 1:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 08:00 a 08:24 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 14:00 a 14:24 pm.");           
       }
	break;
case 2:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 08:24 a 08:48 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 14:24 a 14:48 pm.");           
       }
	break;
case 3:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 08:48 a 09:12 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 14:48 a 15:12 pm.");           
       }
	break;
case 4:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 09:12 a 09:36 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 15:12 a 15:36 pm.");           
       }
	break;
case 5:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 09:36 a 10:00 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 15:36 a 16:00 pm.");           
       }
	break;
case 6:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 10:00 a 10:24 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 16:00 a 16:24 pm.");           
       }
	break;
case 7:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 10:24 a 10:48 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 16:24 a 16:48 pm.");           
       }
	break;
case 8:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 10:48 a 11:12 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 16:48 a 17:12 pm.");           
       }
	break;
case 9:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 11:12 a 11:36 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 17:12 a 17:36 pm.");           
       }
	break;
case 10:if(turno=='M')
       {
           printf("Numero de ficha NF-%x \n",x);
           printf("Turno %c - MANIANA\n",turno);
           printf("Horario de atencion 11:36 a 12:00 am.");           
       }
       if(turno=='T')
       {
           printf("Numero de ficha NF-%x\n",x);
           printf("Turno %c - TARDE\n",turno);
           printf("Horario de atencion 17:36 a 18:00 pm.");           
       }
	break;
default: printf("FUERA DE RANGO....");
}
 getch();
}


