/* 10. Dado 3 números mostrarlos de forma ordenada. Por ejemplo si se introduce los números 5, 2, 13; se mostrará 2, 5, 13. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int a,b,c;
main()
{
    printf("Ingrese los valores enteros de a, b y c: ");
    scanf(" %d %d %d",&a,&b,&c);
    if(a<b)
    {
    if (a<c)
    {
        if (b<c)
        {   
            printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", a,b,c);
        }
        else
        {   
            printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", a,c,b);
        }
    }
    else
        {   
            printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", c,a,b);
        }
    }
    else
    {
        if (a<c)
        {
            printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", b,a,c);
        }
        else
        {
            if (c<b)
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", c,b,a);
            }
            else
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d\n\n", b,c,a);
            }
        }
    }
system("pause");
}