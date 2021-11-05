// suma de matrices con validaciones 
#include <stdio.h>
#include <conio.h>
void main()
{
int A[99][99],B[99][99],C[99][99],i,j,x,n,m;
x=0;
printf("limite matriz A:");
scanf("%d",&n);
printf("limite matriz B:");
scanf("%d",&m);
if(n==m)
{
printf("Ingresar elementos de la matriz A:\n");
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-1);j++)
{
printf("%d %d =",i,j);
scanf("%d",&x);
A[i][j]=x;
}
}
printf("Ingresar elementos de la matriz B:\n");
for(i=0;i<=(m-1);i++)
{
for(j=0;j<=(m-1);j++)
{
printf("%d %d =",i,j);
scanf("%d",&x);
B[i][j]=x;
}
}
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-1);j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-1);j++)
{
printf("  %d",C[i][j]);
//Scanf("%d",Alílljl);
}
printf("\n");
}
}
else
{
    printf("\n No se puede sumar por que son de distinto orden...");
}
getch();
// clrscr() ;
} 