#include <stdio.h>
#include <math.h>
using namespace std;

/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações. */

int main()
{
float p_num, s_num, div;

 printf ("Digite o primeiro numero: ");
 scanf ("%f%*c", &p_num);
 printf ("Digite o segundo numero: ");
 scanf ("%f%*c", &s_num);
 
 div = p_num/s_num;
 
 printf ("O valor da divisao e: %f", div);
     return 0;
}