
/********** Solución de una ecuación de segundo grado **********/
/* ecuacion.c
*/
#include <stdio.h> // necesario para scanf y printf
#include <stdlib.h> // necesario para system
#include <math.h> // necesario para sqrt
#include <conio.h> // necesario para sqrt

void main()
{
    double a, b, c, d, x1, x2;
    system("cls");
    /* Entrada de datos */
    printf("Introducir los coeficientes a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    /* Comprobar si las raíces son reales */
    d = b * b - 4 * a * c;
    (d < 0) ? printf("Las raíces son complejas\n"), exit(0)
    : printf("Las raíces reales son:\n");
    /* Cálculo de las soluciones */
    d = sqrt(d);
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);
    /* Escribir resultados */
    printf("x1 = %g\nx2 = %g\n", x1, x2);
    getch();    
}