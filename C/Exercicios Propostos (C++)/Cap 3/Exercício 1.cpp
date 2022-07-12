#include <stdio.h>
#include <math.h>
using namespace std;

/*Faça um programa que receba dois números, calcule e mostre a subtração do primeiro n° pelo segundo.*/

int main ()
{
float prim_num, seg_num, sub;

 printf ("Digite o primeiro numero: ");
 scanf ("%f%*c",&prim_num);
 printf ("Digite o segundo numero: ");
 scanf ("%f%*c",&seg_num);
 
 sub = prim_num - seg_num;

 printf ("A subtracao entre esses dois numeros sera: %3.1f", sub);
     return 0;
}