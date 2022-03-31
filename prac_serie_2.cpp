//2. Generar la serie para N términos: -2, 2, 0, 2, 2, 4, 6…
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	cin>>n;
    a=-1;b=-1;c=0;
for (int i = 1; i <= n; i++)
    {
        c=a+b;
        cout<<c<<",";
        a=b;
        b=c;        
    }
    cout<<endl;
system("PAUSE"); 
}