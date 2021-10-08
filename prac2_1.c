// 1.- 	Determinar si un número entero es positivo, negativo o neutro, 
// 		también si es par o impar. c++
#include <stdio.h> 
#include <conio.h> 
void main(void) {
	int numero; 
  	printf("Introduce un numero:");
	scanf("%d", &numero);
	if(numero == 0){
		printf("Neutro\n");
	}else if(numero > 0){
		printf("Positivo\n");
	}else{
		printf("Negativo\n");
	}
	if (numero % 2 == 0)
	{
		printf("Es PAR");
	}
	else
	{
		printf("Es IMPAR");
	}
	getch();
}