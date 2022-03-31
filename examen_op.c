#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
//clrscr();int x;
float desc,mf,fa,ce,pi,rad,A;
desc=0;mf=0;
int tipo;
pi=3.14;
int n,x,c,cpares,spares,cimpares,aux;
                    float ppares;
                    
printf("\n1.- Convertir de F a C");
printf("\n2.- Area de uan circunferencia");
printf("\n3.- Promedio de Pares y contar Impares");
printf("\n4.- Salir");
//printf("\nIngresar el tipo de descuento[A-B]:");
//scanf("%c",&tipo);
printf("\nIngresar la opcion:");
scanf("%d",&tipo);
switch(tipo)
{
    case 1: printf("\n Dame los grados en F:");
              scanf("%f",&fa);
              ce = (5.0/9.0)*(fa-32);
              printf("\nGrados Celsius : %.2f",ce);
              break;
    case 2: printf("\n Cual es el radio:");
              scanf("%f",&rad);
              A =pi*(rad*rad);
              printf("\nEl Area de la circunferencia es : %.2f",A);
               break;
    case 3:     printf("Ingresar el LIMITE:");
                    scanf("%d",&n);
                    cpares=0;
                    c=0;
                    spares=0;
                    cimpares=0;
                    ppares=0;
                    
                    for (int i = 1; i <= n; i++)
                    {   printf("Numero %d:",i);
                        scanf("%d",&x);
                    if(x%2==0)
                    {
                        cpares=cpares+1;
                        spares=spares+x;  
                    }
                    else
                    {
                        cimpares=cimpares+1;  
                    }
                    //  div=0;
                    }
                ppares=spares/cpares;
                printf("Promedio de pares: %.2f",ppares);
                printf("Contar impares: %d",cimpares);
                   
                break;
    case 4:  printf("\n gracias hasta luego...");
               break;
    
    default:  printf("\nLa opcion no es valida...");
              break;    
}
 getch();
}
