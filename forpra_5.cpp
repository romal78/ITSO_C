//5. Escribir un programa para leer el sexo (M y H) de N personas y determinar cuántos hombres y
//   mujeres se encuentran en el grupo.
#include<iostream>
using namespace std;
int main()
{
 int numero,num_muj,num_hom;
 num_hom=0; num_muj=0;
 char ind;
 cout<<"Ingresa el numero de personas:";
 cin>>numero;
 cout<<"Ingresar si es [H|M]-->"<<endl;
 for (int i = 1; i <= numero; i++)
 {  
    cout<<"Individuo "<<i<<" es -->";
    cin>>ind; 
     if (ind=='H' or ind=='h')
     {
         num_hom=num_hom+1;
     }
     else if(ind=='M' or ind=='m')
     {
         num_muj=num_muj+1;
     }
}
  cout<<"Numero de Hombres:"<<num_hom<<endl;
  cout<<"Numero de Mujeres:"<<num_muj<<endl;
  cout<<endl;
 //return 0;
 system("PAUSE");    
} 