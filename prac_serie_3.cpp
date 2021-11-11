//3. Generar la serie para N términos: 0, 1, 1, 2, 4, 7,…
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
    cout<<"Limite:";
	    cin>>n;
        a=-1;b=1;c=0;
for (int i = 1; i <= n; i++)
    {
        d=a+b+c;
        cout<<d<<",";
        a=b;
        b=c;
        c=d;
    }
    cout<<endl;
system("PAUSE"); 
}