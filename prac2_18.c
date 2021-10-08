/* 18. En el colegio militar se piden tres datos principales: 
   Edad (entre 18 y 20 años), 
   estatura (1,70 mts o más) 
   y en sus notas un promedio superior a los 70 puntos. 
   Elaborar el algoritmo que lea estos tres datos y muestre un mensaje de aceptado 
   (si cumple 2 o más requisitos) o rechazado (no cumple ni 2 requisitos)  */
#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
void main()
{ int edad,  requisitos;
float est, prom;
requisitos=0;
 printf("Introducir edad: ");
    scanf("%d", &edad);
 printf("Introducir la estatura: ");
    scanf("%f", &est);
 printf("Introducir promedio de notas: ");
    scanf("%f", &prom);
if (edad>=18 && edad<=20)
{
    requisitos=requisitos +1;    
}
else
{
    requisitos=requisitos-1;
}
 if (est>=1.70)
{
    requisitos= requisitos+1;    
}
else
{
    requisitos=requisitos-1;
}  
 if (prom>=70)
{
    requisitos=requisitos +1;    
}
else
{
    requisitos=requisitos-1;
}
if (requisitos>=2)
{
    printf("ACEPTADO...\n");
    printf("Cumples %d requisitos...\n",requisitos);    
}
else
{
    printf("RECHAZADO...\n");
    printf("Solo cumples %d requisitos...\n",requisitos);    
}
 getch();   
}