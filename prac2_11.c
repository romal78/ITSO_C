/* 11. Desarrolle un algoritmo donde se lea los valores de tres números: A, B y C. 
   Se desea calcular el valor de una variable D.
   Si A=B entonces evaluar si A> C y si cumple esta condición hallar D = A2, sino D = C2.
   Si A es diferente de B entonces evaluar si A>B y si cumple esta condición hallar D = A-10, 
   sino D= B + 10. Mostrar el valor de D.*/ 
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int a,b,c,d;
main()
{
    printf("Ingrese los valores enteros de a, b y c: ");
    scanf(" %d %d %d",&a,&b,&c);
    if(a==b)
    {
          if(a>c)
            {
                d=a^2;
            }
          else
            {
                d=c^2;
            }
    }
    else
    {
         if(a>b)
            {
                d=a-10;
            }
          else
            {
                d=b+10;
            }
    }
printf("el resultado es:  %d \n\n", d);
system("pause");
}
    