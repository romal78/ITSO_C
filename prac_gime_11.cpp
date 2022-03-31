// 0! + 1 + 1! + 2 + 3! +…
 #include<iostream>
using namespace std;
int main()
{
	long double n,a,b,c,fac,ss,j;
    cout<<"Limite:";
	cin>>n;
    a=-1;b=1;ss=0;j=1;fac=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+b;
        a=b;
        b=c;
        if(i%2!=0)
        {
        for (int j = 1; j <= c; j++)
        {
          fac=fac*j;
        }
        ss=ss+fac;
        cout<<fac<<"+";    
        fac=1;
        }
        else
        {
            ss=ss+c;
        cout<<c<<"+";
	    }
    }
      cout<<"="<<ss<<endl;
system("PAUSE"); 
}
