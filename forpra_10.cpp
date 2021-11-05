/*10, Lea el peso y estatura de N personas, y para cada una de ellas calcule y 
muestre su índice de masa corporal (IMC) mediante la siguiente fórmula: 
IMC= 𝑝𝑒𝑠𝑜 / estatura^2
Mostrar también uno de los siguientes mensajes de acuerdo al valor del IMC 
IMC<=15.9 imprimir “Delgadez severa”
16<=IMC<=18.4 imprimir “Delgadez aceptable”
18.5<=IMC<=24.9 imprimir “Peso normal”
25<=IMC<=29.9 imprimir “Sobrepeso”
30<=IMC<=34.9 imprimir “Obesidad moderada”
IMC>=35 imprimir “Obesidad severa”
*/
#include<iostream>

using namespace std;
int main()
{
	int n,peso,estatura,IMC;
    IMC=0;
    cout<<"Ingresar numero de empleados:";
	cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Ingresar el peso del empleado "<<i<<":";
	    cin>>peso;
        cout<<"Ingresar la estatura del empleado "<<i<<":";
	    cin>>estatura;
        IMC= peso/estatura^2;
        if(IMC<=15.9){
            cout<<"Delgadez severa...";
        }
        else if (IMC<=18.4){
            cout<<"Delgadez aceptable...";
        }
        else if (IMC<=24.9){
            cout<<"Peso Normal...";
        }
        else if (IMC<=29.9){
            cout<<"Sobrepeso...";
        }
        else if (IMC<=34.9){
            cout<<"Obesidad moderada...";
        }
        else{
            cout<<" Obesidad severa...";
        }
}
system("PAUSE");    
}