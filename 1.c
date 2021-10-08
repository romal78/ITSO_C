#include<stdio.h>
#include<conio.h>
void main()
{
    int X,P,R;
    printf("Ingresar el costo:"); 
    
    scanf("%d",&X);
    P=X*0.45;
    R=X-P;
    printf("\n \t Cancelar %d",R); 
    printf("\n \t EL precio inicial es %d",X); 
    //return 0;
    getch(); 
}