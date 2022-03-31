// sumatoria de series 
#include<iostream>
using namespace std;
int main()
{
	int s,n,a,b,c;
    cout<<"Limite:";
	cin>>n;
    a=-1;b=1;s=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b;
        a=b;
        b=c;
        if (i%2 ==0)
        {
        s=s-c;
        }else
        {
        s=s+c;
        }
    }
    cout<<"="<<s<<endl;
system("PAUSE"); 
}