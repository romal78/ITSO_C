/* Programa: Año bisiesto o no */
#include <conio.h>
#include <stdio.h>

int main()
{
    int anio;

    printf( "\n   Introduzca un a%co: ", 164 );
    scanf( "%d", &anio );

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
        printf( "\n   ES BISIESTO" );
    else
        printf( "\n   NO ES BISIESTO" );

    getch(); 

    return 0;
}