#include <iostream>
using namespace std;
 
int main()
{
	int num,j;
	int div=0;//haz un acumulativo de cuantos suman entre si los divisores del numero
	/*int menors;*/
    j=0;
	cout<<"Introduzca un numero entero y le diremos si es perfecto o no."<<endl;
	cout<<"Numero: ";
	cin>>num;
	for (int i=1; i<num; i++){
		if (num%i==0)
			div =div+i;
	}
	if (num==div)
	{
		cout<<num<< " es perfecto"<<endl;
        j=j+1;
	}
	else
	{
		cout<<num<<" no es perfecto"<<endl;
    }
//
cout<<"Nro de perfectos "<<j<<endl;
	
 system("PAUSE"); 
}