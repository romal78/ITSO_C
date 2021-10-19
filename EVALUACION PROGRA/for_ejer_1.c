#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
float con,total_con,desc,mf;
int tipo;
desc=0;mf=0;
for(int i=0;i<=19;i++){

printf("\nIngresar %d consumo a pagar:",i);
scanf("%f",&con);
total_con=total_con+con;
}

if(total_con>450)
{
printf("\nDescuento 1");
printf("\nDescuento 2");
printf("\nDescuento 3");
printf("\nDescuento 4");
printf("\nDescuento 5");
//scanf("%d",&tipo);
printf("\nIngresar tipo de descuentocarnet[1-5]:");
scanf("%d",&tipo);
switch(tipo)
{
    case 1: 
          desc =total_con*0.35;
	      mf=total_con-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      break;
    case 2: desc =total_con*0.30;
	      mf=total_con-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      break;
    case 3: desc =total_con*0.25;
	      mf=total_con-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      break;
    case 4: desc =total_con*0.20;
	      mf=total_con-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      break;
    case 5: desc =total_con*0.10;
	      mf=total_con-desc;
	      printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      break;
    default:  printf("\nNo tiene descuento...");
	      break;
}
}
else
{
    mf=total_con;
    printf("\n el monto a pagar %.2f menos el descuento %.2f es:%.2f",total_con,desc,mf);
	      
}

 getch();
}
