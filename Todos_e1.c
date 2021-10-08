/* Ejercicio 1 (RANGOS). Leer tres consumos, obtener el total a pagar; 
si el total esta entre 0 y 450 hacerle un descuento de 4%; 
si esta entre 451 y 700 descontarle 6%; 
si esta entre 701 y 1200 descontarle 9%; 
es superior a 1200 descontarle 12%; 
mostrar el total a pagar.
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//int a,b,r;
void main()
{   
    float c1,c2,c3,tap,desc;
    tap=0;desc=0;
    printf("Ingrese los tres consumos:");
    scanf("%f%f%f",&c1,&c2,&c3);
    tap=c1+c2+c3;
    if(tap >=0 &&tap<=450)
    {
        desc=tap*0.04;
    }
    else
    {
        if(tap>=451 &&tap<=700)
        {
            desc=tap*0.06;
        }
        else
        {
            if(tap>=701 &&tap<=1200)
            {
                desc=tap*0.09;
            }
            else
            {
                desc=tap*0.12;
            }   
        }
    } 
    tap=tap-desc;
    printf("Total a pagar menos descuento - %.2f es: %.2f\n", desc,tap);
system("pause");
}
