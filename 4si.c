#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e, S;
    printf("Ingresar 5 Consumos:"); 
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    S=a+b+c+d+e;
    if (S>=350)
    {
    S=S-(S*0.15);
    }
    printf("\nTotal a pagar es :%f",S);
    
    getch(); 
}