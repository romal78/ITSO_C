/* 14. Desarrolle un algoritmo donde se introduzcan 2 números. 
   Si la resta del primero menos el segundo da un número negativo mostrar el 
   producto de los dos números caso contrario mostrar la suma de los números.*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//int a,b,r;
void main()
{   
    int a,b,r;
    printf("Ingrese los valores enteros de a y b:");
    scanf("%d%d",&a,&b);
    r=a-b;
    if(r<0)
    {
        r=a*b;
        printf("El producto de %d * %d es: %d\n\n", a,b,r);
    }
    else
    {
        r=a+b;
        printf("la Suma de %d + %d es: %d\n\n", a,b,r);
    }
system("pause");
}
    