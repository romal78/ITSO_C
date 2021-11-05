/* 6.
Se requiere un algoritmo para determinar cuánto ahorrará una persona
en un año, si al final de cada mes deposita variables cantidades de dinero; 
además, se requiere saber cuánto lleva ahorrado cada mes.

Algoritmo detarea
Definir x Como Entero
Definir ahorro, suma Como Real
x = 1
suma = 0
Mientras x <= 12 Hacer
Escribir "Ingresa el ahorro del mes"
leer ahorro
suma = suma + ahorro
Escribir "El ahorro acumulado hasta el mes de ",x," es: $",suma
x = x + 1
FinMientras
Escribir "El ahorro total en todo el año es: $",suma
FinAlgoritmo
*/
#include<iostream>
using namespace std;
int main()
{
 float ahorro, suma;
 suma = 0;
 for (int i = 1; i <= 12; i++)
 {  
 cout<<"Ingresa el ahorro del mes "<<i<<" es:";
 cin>>ahorro;
 suma=suma+ahorro;
 cout<<"El ahorro acumulado hasta el mes "<<i<<" es:"<<suma<<endl;
 }
  cout<<"El ahorro total en todo el año es:"<<suma<<endl;
  cout<<endl;
 //return 0;
 system("PAUSE");    
} 