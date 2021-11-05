/* 9. Leer N sueldos de empleados, de los mismos contar los 
     sueldos bajos, 
     sueldos medios 
     y sueldos altos,
     según sea el sueldo 
     si: sueldo < 2000 (sueldo bajo), 
     sueldo < 4500 (sueldo medio), 
     otro caso (s. alto).
     */
#include<iostream>

using namespace std;
int main()
{
	int n,sueldo,sb,sm,sa;
    sb=0;sa=0;sm=0;
	cout<<"Ingresar numero de empleados:";
	cin>>n;
    for (int i = 1; i <= n; i++)
    {
      	cout<<"Ingresar sueldo del empleado "<<i<<":";
    	cin>>sueldo;
        if (sueldo<2000)
        {
            sb=sb+1;
        }
        else if(sueldo<4500)
        {
            sm=sm+1;
        }
        else
        {
            sa=sa+1;
        }
    }
cout<<"Los sueldos bajos son: "<<sb;
cout<<endl;
cout<<"Los sueldos medio son: "<<sm;
cout<<endl;
cout<<"Los sueldos altos son: "<<sa;
cout<<endl;
 //return 0;
 system("PAUSE");    
}  