#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
//clrscr();int x;
float map,desc,mf;
char tipo,tipo_2;
desc=0;mf=0;
printf("\nIngresar el monto a pagar:");
scanf("%f",&map);
printf("\nTipo A");
printf("\nTipo B");
scanf("%c",&tipo);
printf("\nIngresar la opcion:");
scanf("%c",&tipo);
switch(tipo)
{
    case 'A': desc =map*0.05;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;
    case 'B': desc =map*0.10;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;
    default:  printf("\nNo tiene descuento...");
	      break;
}

printf("\npromocion 1");
printf("\npromocion 2");
printf("\npromocion 3");
printf("\npromocion 4");
scanf("%c",&tipo_2);
printf("\nIngresar la opcion:");
scanf("%c",&tipo_2);
switch(tipo_2)
{
    case '1': desc =map*0.05;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;
    case '2': desc =map*0.10;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;
    case '3': desc =map*0.05;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;
    case '4': desc =map*0.10;
	      mf=map-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",map,desc,mf);
	      break;

    default:  printf("\nNo tiene promocion...");
	      break;
}


 getch();
}
