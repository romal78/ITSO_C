// llenar dos vectores y sumarlos en otro vector
#include<iostream>
using namespace std;
    int llenar(int v[],int m)
    {int x;
    for (int i = 1; i <= m; i++)
    {   
        cin>>v[i];
        
    }
    return 0;
    }
int imprimir(int v[],int m)
    {int x;
    for (int i = 1; i <= m; i++)
    {   
        cout<<" "<<v[i];
    }
    cout<<endl;
    return 0;
    }
int suma(int j[],int k[],int l[],int m)
    {int x;
    for (int i = 1; i <= m; i++)
    {   
        l[i]=j[i]+k[i];
    }
    return 0;
    }
int main()
{
  int x[99],y[99],z[99];
  int n;
cout<<"limite:";
cin>>n;
cout<<"llenar A:"<<endl;
llenar(x,n);
cout<<"llenar B:"<<endl;
llenar(y,n);
suma(x,y,z,n);
cout<<"Mostrar  A:"<<endl;
imprimir(x,n);
cout<<"Mostrar  B:"<<endl;
imprimir(y,n);
cout<<"Mostrar  C:"<<endl;
imprimir(z,n);
system("PAUSE"); 
}    
