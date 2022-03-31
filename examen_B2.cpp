//Leer un lote de N números, de  los mismos contar primos, perfectos pares e impares
#include<iostream>
using namespace std;
int main()
{
	int n,x,c,cpares,spares,cimpares,div,c_prim,c_perf,aux;
    float ppares;
    cout<<"Ingresar el LIMITE:";
	cin>>n;
    cpares=0;
    c_perf=0;
    c=0;
    div=0;
    spares=0;
    cimpares=0;
    ppares=0;
    for (int i = 1; i <= n; i++)
    {   div=0;
        cout<<"Numero "<<i<<":";
	    cin>>x;
       if(x%2==0)
       {
          cpares=cpares+1;
          spares=spares+x;  
       }
       else
       {
          cimpares=cimpares+1;  
       }
       
       

      //  div=0;
}
   ppares=spares/cpares;
   cout<<"Promedio de pares:"<<ppares<<endl;
	cout<<"Contar impares:"<<cimpares<<endl;
	cout<<endl;
 //return 0;
 system("PAUSE"); 
}