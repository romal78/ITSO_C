// 9. Dado tres números diferentes, mostrar el número menor.
#include <stdio.h> 
#include <conio.h> 
void main() {
	int a,b,c; 
    printf("Introduce 3 numeros:");
	scanf("%d%d%d",&a,&b,&c);
    if(a < b)
    {
        if(a<c)
       {
          printf("El numero %d es el menor de los tres",a);
       } 
       else
       {
          printf("El numero %d es el menor de los tres",c);
       }
    }    
    else
    { 
       if(b<c)
       {
          printf("El numero %d es el menor de los tres",b);
       } 
       else
      {
          printf("El numero %d es el menor de los tres",c);
      }
    }
    getch();
} 