//7. Generar la serie para N términos:   2, 1, 4, 3, 6, 5, 8, 7 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,p,q,c,r,s;
    cout<<"Limite:";
	cin>>n;
    a=-1;b=2;c=0;p=0;q=2;r=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b;
        r=p+q;
        if (i%2 ==0)
        {
        cout<<c<<",";
        a=c;
        
        }else
        {
        cout<<r<<",";
        p=r;
            
        }
    }
    cout<<endl;
system("PAUSE"); 
}