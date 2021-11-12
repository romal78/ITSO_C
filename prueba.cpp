//2. Generar la serie para N términos: 0 5 15 30 50 75 105
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
    cout<<"Limite:";
	cin>>n;
    a=0;b=5;c=0;d=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b; 
        cout<<d<<",";
        d=d+c;
        a=5;
        b=c;        
    }
    cout<<endl;
system("PAUSE"); 
}