#include<stdio.h>
#include<conio.h>
void main()
{
    float Not1, Not2,Not3,Not4,Not5  ;
    float promedio, NotaFinal;
    printf("Ingresar 5 Notas:"); 
    scanf("%f%f%f%f%f",&Not1,&Not2,&Not3,&Not4,&Not5);
    promedio=(Not1+Not2+Not3)/3;
    promedio=promedio*0.25;
    Not4=Not4*0.35;
    Not5=Not5*0.4;
    NotaFinal= promedio+Not4+Not5;
    printf("\n La Nota Final es:%f",NotaFinal);
    getch(); 
}