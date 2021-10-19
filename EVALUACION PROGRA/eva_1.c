#include <stdio.h> // necesario para scanf y printf
#include <stdlib.h> // necesario para system
#include <math.h> // necesario para sqrt
void main()
{
    int anac_a,anac_b,c_edad,edad_a,edad_b,men;
    printf("Introducir dos anios de nacimiento: ");
    scanf("%d%d", &anac_a,&anac_b);
    printf("Introducir el anio actual: ");
    scanf("%d", &c_edad);
    edad_a=c_edad-anac_a;
    edad_b=c_edad-anac_b;
    printf("A tiene %d anios\n",edad_a);
    printf("B tiene %d anios\n",edad_b);

    if(edad_a>edad_b)
    {
    printf("El mayor es A y tiene %d anios\n",edad_a);
    printf("El menor es B, tiene %d anios y tiene...",edad_b);
    men=edad_b;
    }
    else
    {
    printf("El mayor es B y tiene %d anios\n",edad_b);
    printf("El menor es A, tiene %d anios y tiene...",edad_a);
    men=edad_a;

    }

    if (men<=17)
    {
	printf("CARNET DE CADETE...\n");
    }
    else if (men<=29)
    {
	printf("CARNET DE JOVEN...\n");
    }
    else  if (men<=59)
    {
	printf("CARNET DE  ADULTO...\n");
    }
    else
    {
	printf("CARNET DE  ADULTO MAYOR...\n");
    }

system("pause");
}