/* 5. Leer el monto a pagar de la cuenta de una persona, luego leer el tipo de artículos 
que se están comprando, para posteriormente aplicar un descuento según el tipo que se detalla: 
Tipo A tiene 12% de descuento, 
tipo B tiene 17% de descuento, 
tipo C tiene 13% de descuento 
y cualquier otro tipo no tiene descuento. 
Finalmente mostrar el monto final a pagar con su descuento.*/ 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
//clrscr();int x;
float map,desc,mf;
desc=0;mf=0;
char tipo;
printf("\nIngresar el monto a pagar:");
scanf("%f",&map);
printf("\nTipo A");
printf("\nTipo B");
printf("\nTipo C");
printf("\nIngresar el tipo de descuento[A][B][C]:");
scanf("%c",&tipo);
printf("\nIngresar la opcion:");
scanf("%c",&tipo);
switch(tipo)
{
    case 'A': desc =map*0.12;
              mf=map-desc;
              printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
              break;
    case 'B': desc =map*0.12;
              mf=map-desc;
              printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
              break;
    case 'C': desc =map*0.12;
              mf=map-desc;
              printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
              break;
    default:  printf("\nNo tiene descuento...");
              break;    
}
 getch();
}
