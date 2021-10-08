// 5.- Programa que lee un año y muestra si es o no bisiesto
#include <iostream>
using namespace std;
int main()
{
   int anio;

   //lectura por teclado del año
   cout<<"Introduce a"<<(char)164<<"o: "; //164 ascii de ñ
   cin >> anio;
  
   if(anio%4==0 and anio %100!=0 or anio %400==0) //Condición de bisiesto
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;

   system("pause"); 
}