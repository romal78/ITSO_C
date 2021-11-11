//4. 4. Generar la serie para N términos: -1, 0, 3, 8, 15, 24…
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	    cin>>n;
        a=0;b=-1;c=0;
for (int i = 1; i <= n; i++)
    {
        c=a+b;
        cout<<c<<",";
        b=b+2;
        a=c;        
    }
    cout<<endl;
system("PAUSE"); 
}