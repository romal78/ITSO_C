// Ingresar 20 consumos y si es menos a 50 descontar
// 8 % y mostrar el toal a pagar
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
float total,x;
total=0;
for(int i=1;i<=20;i++){
printf("\nIngresar %d consumo:",i);
scanf("%f",&x);
if (x>50)
{
    total=total+(x-(x*0.08));
   }
else
{
    total=total+x;
}
}
printf("\nTotal a pagar es:%f \n",total);
getch();
}
