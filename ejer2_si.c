// Leer dos números decir si el primero es mayor al segundo sumarlos, 
// caso contrario multiplicarlos y mostrar el resultado
#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y,S,M;
    printf("Ingresar dos numeros:"); 
    scanf("%f%f",&x,&y);
    if (x>y)
    {
        S=x+y;
        printf("\nLa SUMA es:%.2f",S);
    
    }
    else
    {
        M=x*y;
        printf("\nLa MULTIPLICACION es:%.2f",M);
    }
    getch(); 
}