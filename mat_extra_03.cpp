// Generar la serie de fibonasi en un vector
#include<iostream>
using namespace std;
int imprimir(int v[],int m)
    {int x;
    for (int i = 1; i <= m; i++)
    {   
        cout<<" "<<v[i];
    }
    cout<<endl;
    return 0;
    }
int fibo(int j[],int m)
    {int a,b;
    a=-1;
    b=1;
    for (int i = 1; i <= m; i++)
    {   
        j[i]=a+b;
        a=b;
        b=j[i];
    }
    return 0;
    }
int main()
{
  int x[99];
  int n;
cout<<"limite:";
cin>>n;
cout<<"Generar serie de fibonaci"<<endl;
fibo(x,n);
imprimir(x,n);
system("PAUSE"); 
}    
