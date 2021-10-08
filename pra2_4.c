//4. Dado un carácter determinar si es una vocal o consonante.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned char c;
      printf ("Dame una letra:\n");
      scanf("%c",&c);
 
     if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
       printf ("La letra %c es una vocal\n",c);
    else if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c==164)||(c==165))     // 164 y 165 son los ASCII de la ñ y Ñ.
       printf ("La letra %c es una consonante\n", c);
    else
       printf("No es una letra\n");
       system("PAUSE");
    return 0;
}