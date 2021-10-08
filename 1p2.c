
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,P,S,AREA;
    printf("Ingresar tres lados de un triangulo:"); 
    scanf("%f%f%f",&a,&b,&c);
    P=a+b+c;
    S=P/2;
    AREA=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n El perimetro es: %f",P); 
    printf("\n El Semiperimetro es: %f",S); 
    printf("\n El Area es: %f",AREA); 
    getch(); 
}