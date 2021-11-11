// 6. Generar la serie para N términos:  0, 2, 6, 12, 20, 30… 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	    cin>>n;
        a=0;b=0;c=0;
for (int i = 1; i <= n; i++)
    {
        c=a+b;
        cout<<c<<",";
        a=c;
        b=b+2;        
    }
    cout<<endl;
system("PAUSE"); 
}