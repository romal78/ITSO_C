//2. Generar la serie para N términos: -2, 2, 0, 2, 2, 4, 6…
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	cin>>n;
    a=4;b=-2;c=-2;
for (int i = 1; i <= n; i++)
    {   
        cout<<c<<",";
        c=a+b;
        a=b;
        b=c;        
    }
    cout<<endl;
system("PAUSE"); 
}