#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	long a,b,c,fac,ss,j;
    int n;
    printf("Ingresar el LIMITE:");
    scanf("%d",&n);
    a=-1;b=1;ss=0;j=1;fac=1;
for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= i; j++)
        {
          fac=fac*j;
        }

        //ss=ss+fac;
        printf(" %ld ",fac);    
        fac=1;
       
//        ss=ss+c;
      //  cout<<c<<"+";
	    
   }
    // cout<<"="<<ss<<endl;
system("PAUSE"); 
}
