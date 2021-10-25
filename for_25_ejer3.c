#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int cp,ci,pos,neg,x,n;
cp=0;ci=0;pos=0;neg=0;
printf("\n Ingrese el Limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\n numero %d:",i);
scanf("%d",&x);
if (x%2 ==0)
{
    cp=cp+1;
}
else
{
    ci=ci+1;
}

if (x>0)
{
   pos=pos+1;
}
else
{
    neg=neg+1;
}
}
printf("\n Pares:%d",cp);
printf("\n Impares:%d",ci);
printf("\n Positivos:%d",pos);
printf("\n Negativos:%d",neg);
getch();
}