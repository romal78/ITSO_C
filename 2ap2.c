#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{
    float Vol, Area, radio, altura, generatriz;
    printf("Ingresar el radio:"); 
    scanf("%f",&radio);
    printf("\nIngresar la altura:"); 
    scanf("%f",&altura);
    printf("\nIngresar la generatriz:"); 
    scanf("%f",&generatriz);
    Vol=(PI*(radio*radio)*altura)/3;
    Area=PI*radio*(generatriz+radio);
    printf("\n El Volumen del Cono es:%f",Vol);
    printf("\n El Area del Cono es:%f",Area);
    getch(); 
}