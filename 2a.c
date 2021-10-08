//
#include<stdio.h>
#include<conio.h>
void main()
{
    float nota1,nota2,nota3,NotaFinal;
    printf("Ingresar tres notas de 0 a 100:"); 
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    printf("\n La nota 1 es es: %f",nota1); 
    printf("\n La nota 2 es es: %f",nota2); 
    printf("\n La nota 3 es es: %f",nota3); 
    nota1=nota1*0.2;
    nota2=nota2*0.3;
    nota3=nota3*0.5;
    NotaFinal=nota1+nota2+nota3;
    printf("\n La nota final es es %f",NotaFinal); 
    getch(); 
}