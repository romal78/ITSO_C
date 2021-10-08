// 2.- 	Dado un número, devolver el doble si el número no es par, caso contrario 
//  el triple.
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 

void main() {
	int numero; 
  	printf("Introduce un numero:");
	scanf("%d", &numero);
	if (numero % 2 == 0)
	{
		numero=pow(numero,3);        
	}
	else
	{
		numero=pow(numero,2);        
	}
    printf("El numero es:%d", numero);
	getch();
}