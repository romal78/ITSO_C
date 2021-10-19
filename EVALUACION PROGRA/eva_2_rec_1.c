#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int a1,b1,c1,a,b,c,cen;
main()
{
    printf("Ingrese tres AÑOS DE NACIMIENTO+: ");
    scanf(" %d %d %d",&a1,&b1,&c1);
    a=2021-a1;
    b=2021-b1;
    c=2021-c1;
    
    if(a<b)
    {
    if (a<c)
    {
        if (b<c)
        {   
            printf("Mayor :%d Menor:%d Centro:%d\n\n", c,a,b);
            
        }
        else
        {   
            printf("Mayor :%d Menor:%d Centro:%d\n\n", b,a,c);
            
        }
    }
    else
        {   
            printf("Mayor :%d Menor:%d Centro:%d\n\n", b,c,a);
            
        }
    }
    else
    {
        if (a<c)
        {
            printf("Mayor :%d Menor:%d Centro:%d\n\n", c,b,a);
            
        }
        else
        {
            if (c<b)
            {
                printf("Mayor :%d Menor:%d Centro:%d\n\n", a,c,b);
                
            }
            else
            {
                printf("Mayor :%d Menor:%d Centro:%d\n\n", a,b,c);
                
            }
        }
    }
system("pause");
}