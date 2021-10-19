#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float pe, est,IMC;
main()
{  // pe=0;est=0;IMC=0;
    printf("Ingrese el peso: ");
    scanf(" %f",&pe);
    printf("Ingrese la estatura: ");
    scanf(" %f",&est);
    IMC=pe/pow(est,2);
    if (IMC<20)
    {
        printf("bajo peso.... ");
    }
    else if (IMC<24)
    {
        printf("Estas bien.... ");
   }
    else
    {
         printf("Sobrepeso.... ");
    }
    system("pause");
}
    