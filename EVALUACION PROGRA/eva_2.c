#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int a,b,c,cen;
main()
{
    printf("Ingrese los valores enteros de a, b y c : ");
    scanf(" %d %d %d",&a,&b,&c);
    if(a<b)
    {
    if (a<c)
    {
        if (b<c)
        {   
            //printf("Los valores ordenados de meyor a menor son: %d %d %d\n\n", c,b,a);
            printf("Mayor :%d Menor:%d Centro:%d\n\n", c,a,b);
            cen=b;
        }
        else
        {   
            //printf("Los valores ordenados de + a - son: %d %d %d\n\n", b,c,a);
            printf("Mayor :%d Menor:%d Centro:%d\n\n", b,a,c);
            cen=c;
        }
    }
    else
        {   
            //printf("Los valores ordenados de + a - son: %d %d %d\n\n", b,a,c);
            printf("Mayor :%d Menor:%d Centro:%d\n\n", b,c,a);
            cen=a;
        }
    }
    else
    {
        if (a<c)
        {
            //printf("Los valores ordenados de + a - son: %d %d %d\n\n", c,a,b);
            printf("Mayor :%d Menor:%d Centro:%d\n\n", c,b,a);
            cen=a;
        }
        else
        {
            if (c<b)
            {
                //printf("Los valores ordenados de + a - son: %d %d %d\n\n", a,b,c);
                printf("Mayor :%d Menor:%d Centro:%d\n\n", a,c,b);
                cen=b;
            }
            else
            {
                //printf("Los valores ordenados de + a - son: %d %d %d\n\n", a,c,b);
                printf("Mayor :%d Menor:%d Centro:%d\n\n", a,b,c);
                cen=c;
            }
        }
    }
    if (cen%2==0)
    {
        printf("El numero de el centro es PAR\n\n");
        
    }
    else
    {
        printf("El numero de el centro es IMPAR\n\n");
        
    }
 if (cen>0)
    {
        printf("El numero de el centro es POSITIVO\n\n");
        
    }
    else
    {
        printf("El numero de el centro es NEGATIVO\n\n");
        
    }
   
system("pause");
}