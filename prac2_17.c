/* 17 Leer el año de nacimiento de una persona, calcular e imprimir su edad al 
presente año (2021). De acuerdo a su edad también mostrar un mensaje asignándole 
un carnet de seguro que le corresponde: 
si su edad esta entre 0 y 17 “Carnet de cadete”, 
si está en la edad entre 18 y 29 años “Carnet de joven”, 
si tiene entre 30 y 59 años “Carnet de adulto”, 
si tiene de 60 años en adelante “Carnet de adulto mayor”.*/

#include <stdio.h> // necesario para scanf y printf
#include <stdlib.h> // necesario para system
#include <math.h> // necesario para sqrt
void main()
{
    int anac,c_edad;
    printf("Introducir el año de nacimiento: ");
    scanf("%d", &anac);
    printf("Introducir el año actual: ");
    scanf("%d", &c_edad);
    c_edad=c_edad-anac;
    printf("Tienes %d años y..",c_edad);
    if (c_edad<=17)
    {
        printf("CARNET DE CADETE...\n");
    }
    else if (c_edad<=29)
    {
        printf("CARNET DE JOVEN...\n");
    }
    else  if (c_edad<=59) 
    {
        printf("CARNET DE  ADULTO...\n");
    }
    else 
    {
        printf("CARNET DE  ADULTO MAYOR...\n");
    }
system("pause");
}