#include <stdio.h>
#include <conio.h>
void main(){	
	char cat;
    float t_apagar,desc;
    printf("Ingrese el total a pagar: ");	
	scanf("%d",&t_apagar);
	printf("Ingrese categoria[X/Y]: ");	
	scanf("%c",&cat);
	switch(cat){
	case 'X':
		printf("\nCATEGORIA X TIENE 5 DESCUENTO..."); 
        desc=0.05*t_apagar;
        t_apagar=t_apagar-desc;
        printf("\nTOTAL A PAGAR ES:",t_apagar); 
        break;		
    case 'Y':
		printf("\nCATEGORIA Y TIENE 5 DESCUENTO..."); 
        desc=0.1*t_apagar;
        t_apagar=t_apagar-desc;
        printf("\nTOTAL A PAGAR ES:",t_apagar); 
        break;		
	default:		
		printf("\nNO TIENE DESCUENTO...");			
	}		
    
 }