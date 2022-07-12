#include <stdio.h>
int main()
{ 
float nota1,nota2,nota3,soma,media;

printf ("Digite o valor da nota 1: ");
scanf ("%f%*c",&nota1);
printf ("Digite o valor da nota 2: ");
scanf ("%f%*c",&nota2);
printf ("Digite o valor da nota 3: ");
scanf ("%f%*c",&nota3);


soma = nota1+nota2+nota3;
media = soma/3;

printf ("O valor da media aritmetica e: %f", media);

return 0;
}
