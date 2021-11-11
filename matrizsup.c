#include <stdio.h>
#include <conio.h>
void main()
{
int A[99][99],i,j,x,n,m;
x=0;
printf("limite matriz triangular superior");
scanf("%d",&n);
printf("Ingresar elementos de la matriz triangular:\n");
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-1);j++)
{
  if (i<j||i==j)
  {
  printf("%d %d =",i,j);
  scanf("%d",&x);
  A[i][j]=x;
  }
  else
  {
  A[i][j]=0;
  }
}
}
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-1);j++)
{
printf("  %d",A[i][j]);
//Scanf("%d",Alílljl);
}
printf("\n");
}
getch();
// clrscr() ;
} 