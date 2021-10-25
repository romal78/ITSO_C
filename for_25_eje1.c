#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int men,may,x,n;
//men=9999;
//may=9999;
may=0;
printf("\n Ingrese el Limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\n numero %d:",i);
scanf("%d",&x);
if (x>may)
{
    may=x;
}
if (x<men)
{
   men=x;
}
}
printf("\n El Mayor es:%d",may);
printf("\n El Menor es:%d",men);
getch();
}