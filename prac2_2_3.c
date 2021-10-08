/* 3. Dado una letra determinar si es una vocal o consonante, además si es vocal 
      imprimir una palabra que inicie con la misma. 
      Por ejm.: letra “e”, imprimir “Vocal e de enano”*/
#include <stdio.h>
#include <conio.h>
void main(){	
	char l;
	printf("Ingrese una letra : ");	
	scanf("%c",&l);
	switch(l){
	case 'a':
		printf("\nVOCAL %c de AUTO",l); break;		
        
	case 'e':
		printf("\nVOCAL %c de ENANO",l); break;		
	case 'i':
		printf("\nVOCAL %c de INTELIGENTE",l); break;		
	case 'o':
		printf("\nVOCAL %c de ORGANO",l); break;		
	case 'u':
		printf("\nVOCAL %c de UNICORNIO",l); break;			
	default:		
		printf("\nCONSTANTE");			
	}		
	getch();
}	