// 2.- Leer un numero y obtener su factorial 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
long x,fac;
fac=1;
printf("\n Ingrese el Numero:");
scanf("%ld",&x);
for(int i=1;i<=x;i++){
fac=fac*i;
}
printf("\n el factorial de %ld es:%ld",x,fac);
getch();
}
