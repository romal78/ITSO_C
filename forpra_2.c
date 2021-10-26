/* 2. Lea un lote de N números y halle la cantidad de múltiplos de 3 y 
      la cantidad de múltiplos de 5 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int mul3,mul5,x,n;
mul3=0;mul5=0;
printf("\n Ingrese el Limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("\n numero %d:",i);
scanf("%d",&x);
if (x%3==0)
{
   mul3=mul3+1;
}
else if (x%5==0)
{
    mul5=mul5+1;
}
}
printf("\n Multiplos de 3:%d",mul3);
printf("\n Multiplos de 5:%d",mul5);
getch();
} 
