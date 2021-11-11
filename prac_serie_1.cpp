//1. Generar la serie para N términos: -1, 2, 5, 8, 11,… 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	    cin>>n;
        a=-4;b=3;c=0;
for (int i = 1; i <= n; i++)
    {
        c=a+b;
        cout<<c<<",";
        a=c;
        //b=c;
    }
    cout<<endl;
system("PAUSE"); 
}