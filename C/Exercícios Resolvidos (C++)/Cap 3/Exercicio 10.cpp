#include <stdio.h>
using namespace std;

/* Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = pi*R².*/

int main()
{
float area, raio;

 printf ("Valor do raio: ");
 scanf ("%f%*c",&raio);

 area = (raio*raio)*3.1415;

 printf ("O valor da area do circulo sera: %f", area);

     return 0; 
}