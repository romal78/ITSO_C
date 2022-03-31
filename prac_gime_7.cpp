// 7.Generar la siguiente sucesión para N términos: 1,3,4,7,11,18,29
// 6. Generar la serie para N términos:  1,3,4,7,11,18,29
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
    cout<<"Limite:";
	    cin>>n;
        a=-1;b=2;c=1;
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