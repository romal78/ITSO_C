// Ingresar 10 notas y si es major a 51 sacar el promedio
// de aprobados y si es menos mostrar el promedio de reprobados
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
float sa,ca,sr,cr,x,pa,pr;
sa=0;ca=0;sr=0;cr=0;pa=0;pr=0;
for(int i=1;i<=10;i++){
printf("\nIngresar %d nota:",i);
scanf("%f",&x);
if (x>=51)
{
    sa=sa+x;
    ca=ca+1;
   }
else
{
    sr=sr+x;
    cr=cr+1;

}
}
pa=sa/ca;
pr=sr/cr;
printf("\nPromedio de APROBADOS:%f \n",pa);
printf("\nPromedio de REPROBADOS:%f",pr);
getch();
}
