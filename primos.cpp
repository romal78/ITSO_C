#include<iostream>

using namespace std;
int main()
{
	int n,x,c,c_prim;
    cout<<"Ingresar el LIMITE:";
	cin>>n;
    c_prim=0;
    c=0;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Numero "<<i<<":";
	    cin>>x;
     for(int j=1;j<=x;j++)
     {
       if (x % j==0)
         {
         c=c+1;
         }
     }    
      if (c==2)
      {
      c_prim=c_prim+1;
     }
  c=0;
}
    cout<<"Numero de primos:"<<c_prim<<endl;
	cout<<endl;
 //return 0;
 system("PAUSE"); 
}