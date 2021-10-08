/* 7. Realizar un algoritmo que lea 3 notas de un estudiante (notas del 1 al 100) 
y calcule el promedio. Si el promedio de las notas es menor a 61 deberá mostrar 
el mensaje "Reprobado", en el caso que el promedio esté entre 61 y 70 
se mostrará el mensaje "Aprobado Regular", si es mayor a 70 mostrará 
"Aprobado eficiente".
*/
#include <stdio.h> 
#include <conio.h> 
void main() {
	float n1,n2,n3,prom; 
  	printf("Introduce 3 notas de 1 a 100:");
	scanf("%f%f%f",&n1,&n2,&n3);
    prom= (n1+n2+n3)/3;        
    if(prom < 61)
    {
        printf("REPROBADO", prom);
    }    
    else
    { 
       if(prom<70)
       {
        printf("APROBADO REGULAR", prom);
       } 
       else
       {
        printf("APROBADO EFICIENTE", prom);
       }
    }
    getch();
} 