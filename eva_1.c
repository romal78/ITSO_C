#include <stdio.h> // necesario para scanf y printf
#include <stdlib.h> // necesario para system
#include <math.h> // necesario para sqrt
void main()
{
    int anac_a,anac_b,c_edad,edad_a,edad_b;
    printf("Introducir dos años de nacimiento: ");
    scanf("%d%d", &anac_a,&anac_b);
    printf("Introducir el año actual: ");
    scanf("%d", &c_edad);
    edad_a=c_edad-anac_a;
    edad_b=c_edad-anac_b;
    printf("A tiene %d años",edad_a);
    printf("B tiene %d años",edad_b);
 
    if(edad_a>edad_b)
    {
    printf("El mayor es A y tiene %d años",edad_a);
        
    }
else
{      printf("El menor es B, tiene %d años y tiene...",edad_b);
 
    if (edad_b<=17)
    {
        printf("CARNET DE CADETE...\n");
    }
    else if (edad_b<=29)
    {
        printf("CARNET DE JOVEN...\n");
    }
    else  if (edad_b<=59) 
    {
        printf("CARNET DE  ADULTO...\n");
    }
    else 
    {
        printf("CARNET DE  ADULTO MAYOR...\n");
    }
}
system("pause");
}