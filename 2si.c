#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y,S,R,M,D;
    printf("Ingresar dos numeros:"); 
    scanf("%f%f",&x,&y);
    S=x+y;
    printf("\nLa SUMA es:%f",S); 
    R=x-y;
    printf("\nLa RESTA es:%f",R); 
    M=x*y;
    printf("\nLa MULTIPLICAION es:%f",M); 
    if (y==0)
    {
    printf("\nLa DIVISION entre 0 no se puede....");
    }
    else
    {
    D=x/y;
    printf("\nLa DIVISION es:%f",D); 
    }
    getch(); 
}