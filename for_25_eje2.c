#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int sa,sm,sb,x,n;
sa=0;sm=0;sb=0;
printf("\n Ingrese el Limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\n Sueldo %d:",i);
scanf("%d",&x);
if (x <2000)
{
    sb=sb+1;
}
else
{
    if (x<3400)
    {
        sm=sm+1;
    } 
    else
    {
        sa=sa+1;
    }
}
}
printf("\n Sueldos Altos es:%d",sa);
printf("\n Sueldos Medios es:%d",sm);
printf("\n Sueldos Bajos es:%d",sb);
getch();
}