// 8. Dado tres números, mostrar el número mayor. 
//    Considerar si los números son iguales.
Proceso Mayor3numeros
Definir a,b,c Como Entero;
Escribir "Ingresa 3 números";
leer a, b, c;
	si a>b Entonces
		
		si a>c Entonces
				Escribir "El número ",a," es el mayor de los tres";
						
		SiNo
				Escribir "El número ",c," es el mayor de los tres";
							
		FinSi                    
	SiNo
		si b>c Entonces
			Escribir "El número ",b," es el mayor de los tres";
		SiNo
			Escribir "El número ",c," es el mayor de los tres";
		FinSi
	FinSi     
FinProceso