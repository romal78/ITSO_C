#include<stdio.h>
#include<conio.h>
void main()
{
    int cociente, residuo, a, b;
    printf("Ingresar los dos numeros:"); 
    scanf("%d%d",&a,&b);
    cociente=a/b;
    residuo=a%b;
    printf("\n La parte entera de la Division es:%d",cociente);
    printf("\n El resto es:%d",residuo);
    getch(); 
}