//7. Generar la serie para N términos:  0, 1, 1, 3, 1, 5, 2, 7, 3, 9, 5
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,p,q,c,r,s;
    cout<<"Limite:";
	cin>>n;
    a=-1;b=1;c=0;p=-1;q=2;r=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b;
        r=p+q;
        if (i%2 ==0)
        {
        cout<<r<<",";
        p=r;
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