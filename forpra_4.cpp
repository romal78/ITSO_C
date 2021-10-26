//4. Leer un lote de N números, de cada uno mostrar sus divisores 
#include<iostream>
using namespace std;
int main()
{
 int numero, resto;
 cout<<"Ingresa el numero:";
 cin>>numero;
 cout<<"Sus divisores son-->";
 for (int i = 1; i <= numero; i++)
 {
     resto=numero%i;
     if (resto==0)
     {
        cout<<i<<",";
     }
}
 cout<<endl;
 //return 0;
 system("PAUSE");    
}