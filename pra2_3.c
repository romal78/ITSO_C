// 3.- 	Calcular la raíz cuadrada de un número y mostrar su resultado. 
//      Considerando el caso en que el número sea negativo.
#include <stdio.h> 
#include <conio.h> 
#include <math.h> 
#include <stdlib.h> 
void main() {
	float numero,raiz; 
  	printf("Introduce un numero:");
	scanf("%f", &numero);
	if (numero > 0)
	{
		numero=sqrt(numero);
        printf("La raiz es:%.2f", numero);
	}
	else
	{   raiz=sqrt(abs(numero));
		printf("La raiz es:%.2f * i", raiz);
        //printf("La raiz de un numero negativo es imaginaria...");
    }
 	getch();
}