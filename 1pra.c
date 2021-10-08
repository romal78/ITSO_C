#include<stdio.h>
#include<conio.h>
void main()
{
    int NumResC, NumResI, NumResBla, NotaFinal;
    printf("Ingresar Numero de Respuestas Correctas:"); 
    scanf("%d",&NumResC);
    printf("Ingresar Numero de Respuestas Incorrectas:"); 
    scanf("%d",&NumResI);
    printf("Ingresar Numero de Respuestas en Blanco:"); 
    scanf("%d",&NumResBla);
    NumResC=NumResC*5;
    NumResI=NumResI*(-3);
    NumResBla=NumResBla*(-1);
    NotaFinal=NumResC+NumResI+NumResBla;
    printf("\n La Nota Final es:%d",NotaFinal);
    getch(); 
}