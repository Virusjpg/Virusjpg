#include <stdio.h>
#include <math.h>

/* Sabe-se que:
pé = 12 polegadas;
1 jarda = 3 pés;
1 milha = 1760 jarda;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados. */

int main()
{
float pes, polegadas, jarda, milhas;
 
 printf ("Digite o numero de pes: ");
 scanf ("%f%*c",&pes);

 polegadas = pes*12;
 jarda = pes/3;
 milhas = jarda/1760;

 printf ("O valor em polegadas e: %f", polegadas);
 printf ("\nO valor em jardas e: %f", jarda);
 printf ("\nO valor em milhas e: %f", milhas);
     return 0;
}