#include<stdio.h>
#include<conio.h>
#define PI 3.1416
void main()
{   
    //const double Pi = 3.14;
    float Vol, Area, radio, altura;
    printf("Ingresar el radio:"); 
    scanf("%f",&radio);
    printf("\nIngresar la altura:"); 
    scanf("%f",&altura);
    Vol=(PI*(radio*radio)*altura);
    Area=2*PI*radio*(altura+radio);
    printf("\n El Volumen del Cilindro es:%f",Vol);
    printf("\n El Area del Cilindro es:%f",Area);
    getch(); 
}