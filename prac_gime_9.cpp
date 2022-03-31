// 9. Generar la siguiente sucesión para N términos: 1, 10, 10, 2, 9, 18, 3, 8, 24, 4, 7, 28,…
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,p,q,r,x,y,z, flag;
    cout<<"Limite:";
	cin>>n;
    flag=1;
    a=0;b=1;p=11;q=1;x=0;y=10;z=0;
for (int i = 1; i <= n; i++)
    {   
        if (flag==1)
        {   c=a+b;
            cout<<c<<",";
            a=c;
            //b=c;
            flag=2;
        }
        else
        {
            if (flag==2)
            {   r=p-q;
                cout<<r<<",";
                p=r;
                flag=3;
            }
            else
            {   z=x+y;
                cout<<z<<",";
                y=y-2;
                x=z;
                flag=1;
            }
        }
      
    }
    cout<<endl;
system("PAUSE"); 
}