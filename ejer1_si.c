//  Leer el precio de un producto, si el mismo es mayor a 1500 descontarle 12%, 
//caso contrario descontarle 5%
#include<stdio.h>
#include<conio.h>
void main()
{
    float precio, descuento;
    printf("Ingresar el precio:"); 
    scanf("%f",&precio);
    if (precio>1500)
    {
    descuento=precio*0.12;
    }
    else
    {
        descuento=precio*0.05;
    }
    printf("\nTotal descuento es:%f",descuento);
    getch(); 
}