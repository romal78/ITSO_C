// 10. Calcular la suma de los primeros N términos de: 2 – 1 + 4 - 3 + 6 – 5 +…
            //                                       2-1+4-3+6-5+8-7+10-9+12-=17
  #include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,p,q,r,s,sp,si,ss;
    cout<<"Limite:";
	cin>>n;
    a=0;b=2;p=-1;q=1;r=0;s=0;sp=0;si=0;ss=0;
for (int i = 1; i <= n; i++)
    {   
        c=a+2;
        r=p+2;
        if (i%2 ==0)
        {
        cout<<r<<"+";
        p=r;
        sp=sp+r;
        //q=r+2;
        }else
        {
        cout<<c<<"-";
        a=c;
        si=si+c;
        //b=c+2;
        //b=c+2;
        }
       
    }
     ss=si-sp;
    cout<<"="<<ss<<endl;
system("PAUSE"); 
}
