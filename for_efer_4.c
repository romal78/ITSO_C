// 1.- Conteo ascendente (1 a N), descendente (N a 1)   y saltado (3 en 3)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int i,x;
printf("\n Ingrese el limite:");
scanf("%d",&x);
printf("\n Conteo Ascendente");
for(int i=1;i<=x;i++){
printf("\n numero %d ",i);
}
printf("\n Conteo Descendente");
for(int i=x;i>=0;i--){
printf("\n numero %d :",i);
}
printf("\n Conteo saltado de 3 en 3");
for(int i=0;i<=x;i=i+3){
printf("\n numero %d :",i);
}
getch();
}
