#include<stdio.h>
#include<conio.h>
void main()
{
    float E;
    printf("Ingresar una estatura:"); 
    scanf("%f",&E);
    if (E>=1.68)
    {
    printf("\nEs ALTO:%f",E);
    }
    else
    {
    printf("\nNo es AlTO:%f",E); 
    }
    getch(); 
}