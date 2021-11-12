// 10. Generar la serie para N términos (tres tiempos): 0, 2, 1, 0, 3, 2, 0, 5, 3, 0, 8, 4,… 
#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,p,q,r,x,y, flag;
    cout<<"Limite:";
	cin>>n;
    flag=1;
    a=0;p=1;q=1;x=0;y=1;
for (int i = 1; i <= n; i++)
    {   
        if (flag==1)
        {
            cout<<a<<",";
            flag=2;
        }
        else
        {
            if (flag==2)
            {   r=p+q;
                cout<<r<<",";
                p=q;
                q=r;
                flag=3;
            }
            else
            {   x=x+y;
                cout<<x<<",";
                flag=1;
            }
            
            /* code */
        }
        
       
    }
    cout<<endl;
system("PAUSE"); 
}