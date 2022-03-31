#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int main() {
	char a[15],*p,*q;
	long n;
	unsigned long x,R;

	printf ("De un numero unsigned long ..\n");
	gets (a);
	x = strtoul (a, &p,0);
	while (*p != '\0') {
		printf ("Cifra errada. Rectifique... %c\n",7);
		gets (a);
		x = strtoul (a,&p,0);
	}
	printf ("\n");
	printf ("De el numero de veces que desea rotar la cifra\n");
	gets (a);
	n = strtol (a, &p,0);
	while (*p != '\0' ||  n < -32768L || n > 32767L) {
		printf ("Cifra errada. Rectifique... %c\n",7);
		gets (a);
		n = strtol (a,&p,0);
	}
	printf ("\n");
	R = _lrotl (x, (int)n);  /* Rota x n veces hacia la izquierda */
	printf ("%#lX, rotado %d vez(ces) hacia",x, (int)n);
	printf (" la izquierda es : %#lX\n",R);
	getch();
}



