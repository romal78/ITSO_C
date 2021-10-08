/* 13. Dado un numero de 6 dígitos, extraer el digito más pesado (d), 
       si este es par calcular el resultado de d^d caso contrario calcular d^2.*/ 
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std ;
int main(){
 int numero,i,d,mayor,dmay;
 i=0;
 cout<<"Ingrese numero :"<<endl;
 cin>>numero;
 while(numero>0){
  if(i==0){
   d=numero%10;
   mayor=d;
   numero=numero/10;
   i++;
  }else{
   d=numero%10;
   numero=numero/10;
   if(mayor<d){
   mayor=d;
   }
  }
 }
cout<<"El digito mayor es : "<<mayor<<endl;
//dmay=mayor;
if (mayor%2==0){
dmay=pow(mayor,mayor);
cout<<"El digito d^d es : "<<dmay;
}
 else{
dmay=pow(mayor,2);
cout<<"El digito d^2 es : "<<dmay;
}
 getch();
//return 0;
}