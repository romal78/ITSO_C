// 8. Dado tres n�meros, mostrar el n�mero mayor. 
//    Considerar si los n�meros son iguales.
Proceso Mayor3numeros
Definir a,b,c Como Entero;
Escribir "Ingresa 3 n�meros";
leer a, b, c;
	si a>b Entonces
		
		si a>c Entonces
				Escribir "El n�mero ",a," es el mayor de los tres";
						
		SiNo
				Escribir "El n�mero ",c," es el mayor de los tres";
							
		FinSi                    
	SiNo
		si b>c Entonces
			Escribir "El n�mero ",b," es el mayor de los tres";
		SiNo
			Escribir "El n�mero ",c," es el mayor de los tres";
		FinSi
	FinSi     
FinProceso