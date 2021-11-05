/* 7. Una empresa les paga a sus empleados con base en las horas trabajadas en la semana (25 por
hora). Realice un programa que lea las horas trabajadas en la semana y calcule el sueldo
semanal de N trabajadores y calcule cuánto pagó la empresa por los N empleados (suma de todos
los sueldos) 
*/
#include<iostream>
using namespace std;
int main()
{
 int  dia,dias,horas,horas_por_trabajador,horas_acum, trabajador,trabajadores; 
 float sueldo_por_hora;
 cout<<"Cuantos trabajadores tiene la empresa?:";
 cin>>trabajadores;
 cout<<"Sueldo por hora:";
 cin>>sueldo_por_hora;
 horas_acum=0;
 for (trabajador = 1; trabajador<=trabajadores; trabajador++)
 {  
    horas_por_trabajador=0;
	cout<<"Cuantos di­as de trabajo tiene el trabajador "<<trabajador<<"?:";
    cin>>dias;
 for (dia = 1; dia<=dias; dia++)
    {
        cout<<"Cuantas horas de trabajo tiene el trabajador "<<trabajador<<"el dia "<<dia<<" ?:";
        cin>>horas;
        horas_por_trabajador=horas_por_trabajador+horas;
    }
    cout<<"El trabajador "<<trabajador<<" tiene de sueldo:"<<horas_por_trabajador*sueldo_por_hora<<endl; 
	horas_acum=horas_acum+horas_por_trabajador;	
 }
  cout<< "El pago a los "<<trabajadores<<" trabajadores es:"<<horas_acum*sueldo_por_hora;
  cout<<endl;
 //return 0;
 system("PAUSE");    
} 