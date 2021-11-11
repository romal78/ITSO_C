//Leer un lote de N números, de  los mismos contar primos, perfectos pares e impares
#include<iostream>
using namespace std;
int main()
{
	int n,x,c,cpares,cimpares,div,c_prim,c_perf,aux;
    cout<<"Ingresar el LIMITE:";
	cin>>n;
    c_prim=0;
    c_perf=0;
    c=0;
    div=0;
    cpares=0;
    cimpares=0;
    for (int i = 1; i <= n; i++)
    {   div=0;
        cout<<"Numero "<<i<<":";
	    cin>>x;
       if(x%2==0)
       {
          cpares=cpares+1;  
       }
       else
       {
          cimpares=cimpares+1;  
       } 
     for(int j=1;j<=x;j++){
      if (x % j==0)
        {
        c=c+1;
        }
     }
     for(int k=1;k<x;k++){
      if (x % k==0)
        {
        div=div+k;
        }
      }
      if (x==div)
	  {
		c_perf=c_perf+1;
	  }     
     if (c==2)
     {
     c_prim=c_prim+1;
     } 
    c=0;
  //  div=0;
}
    cout<<"Numero de primos:"<<c_prim<<endl;
    cout<<"Numero de perfectos:"<<c_perf<<endl;
	cout<<"Numero de pares:"<<cpares<<endl;
	cout<<"Numero de impares:"<<cimpares<<endl;
	cout<<endl;
 //return 0;
 system("PAUSE"); 
}