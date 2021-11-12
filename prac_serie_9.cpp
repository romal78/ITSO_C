//9. Generar la serie para N términos:  5, 0, 8, 5, 13, 15, 21, 30,… 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,p,q,c,r,s;
    cout<<"Limite:";
	cin>>n;
    a=2;b=3;p=0;q=5;r=0;s=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b;
        r=p+q;
        if (i%2 ==0)
        {
        cout<<s<<",";
        s=s+r;
        p=5;
        q=r;
        }else
        {
        cout<<c<<",";
        a=b;
        b=c;
        }
    }
    cout<<endl;
system("PAUSE"); 
}