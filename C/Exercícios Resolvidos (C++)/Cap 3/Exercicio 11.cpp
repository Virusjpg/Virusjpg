#include <stdio.h>
#include <math.h>
using namespace std;

/* Faça um programa que receba um número positivo maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/

int main()
{
float num, quad, cubo, r2, r3;

 printf ("Digite o numero /positivo maior que zero/: ");
 scanf ("%f%*c",&num);
 
 quad = pow(num, 2);
 cubo = pow(num, 3);
 r2 = sqrt (num);
 r3 = cbrt (num);
 
 printf ("O valor do quadrado e: %5.5f", quad);
 printf ("\nO valor do cubo e: %5.5f", cubo);
 printf ("\nO valor da raiz quadrada e: %5.5f",r2);
 printf ("\nO valor da raiz cubica e: %5.5f",r3);
 
     return 0;

}