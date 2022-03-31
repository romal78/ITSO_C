// 8. Generar la siguiente sucesión para N términos: 1,1,1,2,2,1,2,3,3,3,1,2,3,4,4,4,4,….
                /*    1
                      1
                      1 
                      2 2
                      1
                      2
                      3 3 3
                      1 
                      2
                      3
                      4 4 4 4
                      */   
#include<iostream>
using namespace std;
int main()
{
	int n,m;
    cout<<"Limite:";
	cin>>n;
    //a=-1;b=2;c=1;
    m=n;
for (int i = 1; i <= n; i++)
    {
        
        if (i==n)
        {
            for (int j= 1; j <=i; j++)
            {
            cout<<i<<",";    
            }
        }
        else
        {
            cout<<i<<",";
        }
       }
    cout<<endl;
system("PAUSE"); 
}