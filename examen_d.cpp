// 10. Generar la serie para N términos (tres tiempos): 0, 2, 1, 0, 3, 2, 0, 5, 3, 0, 8, 4,… 
#include<iostream.h>
//using namespace std;
int main()
{
	int sumaserie,n,a,b,c,p,q,r,x,y, flag;
    cout<<"Limite:";
	cin>>n;
    flag=1;
    a=0;p=7;x=0;y=2;
for (int i = 1; i <= n; i++)
    {   
        if (flag==1)
        {
            cout<<a<<"+";
            a=1;
            flag=2;
        }
        else
        {
            if (flag==2)
            {   
                cout<<p<<"+";
                flag=3;
            }
            else
            {   x=x+y;
                cout<<x<<"+";
                flag=1;
            }
            
            /* code */
        }
        
       
    }
    cout<<endl;
system("PAUSE"); 
}