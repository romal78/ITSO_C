#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Ingresar un numero:"); 
    scanf("%d",&x);
    if (x %2 ==0)
    {
    printf("\n El Numero es PAR");
    }
    else
    {
    printf("\n El Numero es IMPAR");
    }
    getch(); 
}