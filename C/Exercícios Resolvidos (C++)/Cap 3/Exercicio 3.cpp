#include <stdio.h>
using namespace std;

int main()
{
float nota1,nota2,nota3,peso1,peso2,peso3,media_numerica;

 printf ("Insira o valor de nota 1: ");
 scanf ("%f%*c",&nota1);
 printf ("Insira o valor de nota 2: ");
 scanf ("%f%*c",&nota2);
 printf ("Insira o valor de nota 3: ");
 scanf ("%f%*c",&nota3);
 printf ("Coloque o valor de peso 1: ");
 scanf ("%f%*c",&peso1);
 printf ("Coloque o valor de peso 2: ");
 scanf ("%f%*c",&peso2);
 printf ("Coloque o valor de peso 3: ");
 scanf ("%f%*c",&peso3);

 media_numerica = nota1*peso1+nota2*peso2+nota3*peso3/peso1+peso2+peso3;

 printf ("A media aritmetica sera: %f", media_numerica);

     return 0;
}