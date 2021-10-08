#include<stdio.h>
#include<conio.h>
void main()
{
    float p1,p2,p3, SumaTPagar;
    printf("Ingresar tres precios:"); 
    scanf("%f%f%f",&p1,&p2,&p3);
    if (p1>200)
    {
    p1=p1*0.15;
    }
    if (p2>200)
    {
    p2=p2*0.15;
    }
    if (p3>200)
    {
    p3=p3*0.15;
    }
    SumaTPagar=p1+p2+p3;
    printf("\nTotal a pagar es:%f",SumaTPagar);
    printf("\np1 es:%f",p1);
    printf("\np2 es:%f",p2);
    printf("\np3 es:%f",p3);
    getch(); 
}