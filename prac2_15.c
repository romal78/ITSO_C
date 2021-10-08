/* 15. Leer cuatro números a, b, c y d luego sumar el primero con el segundo, 
       multiplicar el tercero con el cuarto, posteriormente de los resultados obtenidos 
       restar el menor con el mayor y mostrar el resultado.*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int a,b,c,d,s,p,r;
main()
{
    printf("Ingrese los valores enteros de a, b y c: ");
    scanf(" %d %d %d %d",&a,&b,&c,&d);
    s=a+b;
    p=c*d;
    if(s>p)
    {
        r=p-s;
    }
    else
    {
        r=s-p;
    }
printf("el resultado es:  %d \n\n", r);
system("pause");
}
    