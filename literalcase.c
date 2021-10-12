#include<stdio.h>
#include<conio.h>
void main()
{int x,d1,d2;
printf("\n\t Dame un numero entre 0 y 99 ");
scanf("%d",&x);
switch(x)
{ case 0: printf("\n\t Cero"); break;
 case 10: printf("\n\t Diez"); break;
case 20: printf("\n\t Veinte"); break;
case 30: printf("\n\t Treina"); break;
case 40: printf("\n\t Cuarenta"); break;
case 50: printf("\n\t Cincuenta"); break;
case 60: printf("\n\t Sesenta"); break;
case 70: printf("\n\t Setenta"); break;
case 80: printf("\n\t Ochenta"); break;
case 90: printf("\n\t Noventa"); break;
case 11: printf("\n\t Once"); break;
case 12: printf("\n\t Doce"); break;
case 13: printf("\n\t Trece"); break;
case 14: printf("\n\t Catorce"); break;
case 15: printf("\n\t Quince"); break;
default:
 d1 = x % 10;
 d2 = x / 10;
switch(d2)
{ case 1: printf("\n\t Dieci "); break;
case 2: printf("\n\t Veinti "); break;
case 3: printf("\n\t Treinta y "); break;
case 4: printf("\n\t Cuarenta y "); break;
case 5: printf("\n\t Cincuenta y "); break;
case 6: printf("\n\t Sesenta y "); break;
case 7: printf("\n\t Setenta y "); break;
case 8: printf("\n\t Ochenta y "); break;
case 9: printf("\n\t Noventa y "); break;
}
switch(d1)
{case 1: printf(" uno "); break;
case 2: printf(" dos "); break;
case 3: printf(" tres "); break;
case 4: printf(" cuatro "); break;
case 5: printf(" cinco"); break;
case 6: printf("seis "); break;
case 7: printf("siete"); break;
case 8: printf("ocho"); break;
case 9: printf("nueve "); break;
}
}
getch();
//clrscr();
}