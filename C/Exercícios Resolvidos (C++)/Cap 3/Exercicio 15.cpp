#include <stdio.h>
#include <math.h>
using namespace std;

/*O custo ao consumidor de um carro novo é soma do preço de fábrica com percentual de lucro do distribuidor
e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual do lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo. */

int main ()
{
float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

 printf ("Escreva o valor do preço de producao de fabrica do produto: ");
 scanf ("%f%*c", &p_fab);
 printf ("Escreva o percentual de lucro do distribuidor:");
 scanf ("%f%*c",&perc_d);
 printf ("Escreva o percentual de imposto: ");
 scanf ("%f%*c",&perc_i);

     vlr_d = p_fab*perc_d/100;
     vlr_i = p_fab*perc_i/100;
     p_final = p_fab+vlr_d+vlr_i;

         printf ("O valor do percentual de lucro do distribuidor sera: %2.3f", vlr_d);
         printf ("\nO valor do percentaul do imposto sera: %2.3f", vlr_i);
         printf ("O valor do preco total sera: %2.3f", p_final);

             return 0;
} 