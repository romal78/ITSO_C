// 3.-Leer un numero decir si es primo o no es primo 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int x,c;
c=0;
printf("\n Ingrese el Numero:");
scanf("%d",&x);
for(int i=1;i<=x;i++){
if (x % i==0)
{
    c=c+1;
}
}
if (c==2)
{
printf("\n El Numero %d es PRIMO",x);
}
else
{
printf("\n El Numero %d NO ES PRIMO",x);    
}
getch();
}