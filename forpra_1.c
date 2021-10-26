/*1. Leer N números, y determinar (contar) cuántas son menores o iguales a cero y cuántas mayores
a cero */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int ig,pos,neg,x,n;
ig=0;pos=0;neg=0;
printf("\n Ingrese el Limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\n numero %d:",i);
scanf("%d",&x);
if (x>0)
{
   pos=pos+1;
}
else if (x<0)
{
    neg=neg+1;
}
else
{
    ig=ig+1;
}
}
printf("\n Positivos:%d",pos);
printf("\n Negativos:%d",neg);
printf("\n Iguales:%d",ig);
getch();
}