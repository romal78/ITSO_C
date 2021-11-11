//5. Generar la serie para N términos: 1, 3, 9, 27,…
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int p,n,x;
p=1;
printf("\n limite:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d ,",p);
p=p*3;
}
getch();
//clrscr();
}
