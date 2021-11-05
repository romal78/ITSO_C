/*8. Una compañía fabrica focos de colores (verdes, blancos y rojos). Realice un programa que
     permita introducir el color de cada foco de un lote de N focos y contabilice el número de focos de
     cada color que hay en existencia. 
Algoritmo detarea
	Definir n,color,verde,blanco,rojo Como Entero
	Escribir "Ingresa la cantidad de focos"
	leer n
	verde = 0
	blanco = 0
	rojo = 0
	Mientras n > 0 Hacer
		Escribir "Selecciona un color"
		Escribir "1 = verde"
		Escribir "2 = blanco"
		Escribir "3 = rojo"
		leer color
		si color >= 1 y color <= 3 Entonces
			si color == 1 Entonces
				verde = verde + 1
			SiNo
				si color == 2 Entonces
					blanco = blanco + 1
				SiNo
					rojo = rojo + 1
				FinSi
			FinSi
			n = n - 1
		SiNo
			Escribir "Ingresa un color correcto"
		FinSi		
	FinMientras
	Escribir "El total de focos verdes es: ",verde
	Escribir "El total de focos blancos es: ",blanco
	Escribir "El total de focos rojos es: ",rojo
FinAlgoritmo*/

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
	int n,color,verde,blanco,rojo;
	cout<<"Ingresa la cantidad de focos:";
	cin>>n;
	verde = 0;
	blanco = 0;
	rojo = 0;
	
 for (int i=n;i>=1;i--)
 {  
 cout<<"1 = verde"<<endl;
 cout<<"2 = blanco"<<endl;
 cout<<"3 = rojo"<<endl;
 cout<<"Selecciona un color:";
 cin>>color;
 if (color>= 1 && color <= 3)
 { 
			if (color == 1) 
				verde = verde + 1;
			else
			{
				if (color == 2) 
				{
					blanco = blanco + 1;
				}
				else
				{
					rojo = rojo + 1;
				}
			}			
}
		else
		{
			cout<<"Ingresa un color correcto.."<<endl;
		}
 }
cout<<"El total de focos verdes es: "<<verde;
cout<<endl;
cout<<"El total de focos blancos es: "<<blanco;
cout<<endl;
cout<<"El total de focos rojos es: "<<rojo;
cout<<endl;
 //return 0;
 system("PAUSE");    
} 