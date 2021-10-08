// 6. Determinar si un número es múltiplo de 2 y 3.

#include <stdio.h> 
#include <conio.h> 
void main() {
	int numero; 
  	printf("Introduce un numero:");
	scanf("%d",&numero);
    if(numero % 2 ==0)
    {
        printf("el %d es multiplo de 2", numero);
    }    
    if(numero % 3 ==0)
    {
        printf("El %d es multiplo de 3", numero);
    }   
    getch();
}