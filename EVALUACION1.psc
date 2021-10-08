// 8. Dado tres números, mostrar el número mayor. 
//    Considerar si los números son iguales.
Proceso Mayor3numeros
Definir a,b,c,d,e,pro Como Entero;
Escribir "Ingresa 5 edades";
leer a, b, c,d,e;
pro<-(a+b+c+d+e)/5;
	si pro>0 y pro<=12 Entonces
		Escribir "NIÑOS..";
		          
	SiNo
		si pro>12 y pro<=17 Entonces
			Escribir "ADOLECENTES..";
		SiNo
			Si pro>17 y pro<=25 Entonces
				Escribir "JOVENES..";
			Sino
				Escribir "ADULTOS..";
			FinSi
		FinSi
	FinSi     
FinProceso