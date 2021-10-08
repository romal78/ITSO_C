#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(){	
	
	int dec, num, uni;
	string decena, unidad;
		
	cout << "Ingrese numero de hasta dos cifras : ";
	cin >> num;	
		
	if(num>0 && num<100){
		if(num > 10 && num < 16){
			switch(num){
				case 11:cout << "ONCE"; break;
				case 12:cout << "DOCE"; break;
				case 13:cout << "TRECE"; break;
				case 14:cout << "CATORCE"; break;
				case 15:cout << "QUINCE"; break;
			}
		}else{
			dec=(num-(num%10))/10;
			uni=(num%10);
						
			switch(dec){
				case 1:decena = "DIEZ"; break;
				case 2:decena = "VEINTE"; break;
				case 3:decena = "TREINTA"; break;
				case 4:decena = "CUARENTA"; break;
				case 5:decena = "CINCUENTA"; break;
				case 6:decena = "SESENTA"; break;
				case 7:decena = "SETENTA"; break;
				case 8:decena = "OCHENTA"; break;
				case 9:decena = "NOVENTA"; break;				
			}
			if(uni!=0){
				switch(uni){
					case 1: unidad = "UNO"; break;
					case 2: unidad = "DOS"; break;
					case 3: unidad = "TRES"; break;
					case 4: unidad = "CUATRO"; break;
					case 5: unidad = "CINCO"; break;
					case 6: unidad = "SEIS"; break;
					case 7: unidad = "SIETE"; break;
					case 8: unidad = "OCHO"; break;
					case 9: unidad = "NUEVE"; break;			
				}
				if (dec==1){
					decena="DIECI";
				}
				if (dec==2){
					decena="VENTI";
				}
				if (dec > 2 && dec < 10){
					cout << endl << decena << "Y" << unidad << endl;
				}else{
					cout << endl << decena << unidad << endl;
				}		
			}else{
				cout << endl << decena << endl;
			}			
		}		
	}else{
		printf("NUMERO INCORRECTO... \n");
	}
	getch();		
	//return 0;
}	