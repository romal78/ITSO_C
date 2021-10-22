// Leer 15 numeros y si es multiplo de 3 realizar la suma de
// sus divisores
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
int i,x,s;
s=0;
for(i=1;i<=15;i++){
printf("\nIngresar numero %d :",i);
scanf("%d",&x);
if(x %2 ==0)
{
    s=s+x;
}
}
printf("\nTotal es:%f \n",s);
getch();
}
