#include <stdio.h>
#include <math.h>
using namespace std;

/*Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050. */

int main()
{
float ano_atual, ano_nascimento, idade_atual, idade_2050;

 printf ("Coloque o ano atual: ");
 scanf ("%f%*c", &ano_atual);
 printf ("Coloque o ano de seu nascimento: ");
 scanf ("%f%*c", &ano_nascimento);
 
 idade_atual = ano_atual - ano_nascimento;
 idade_2050 = 2050 - ano_nascimento;

 printf ("A sua idade atual e: %2.1f", idade_atual);
 printf ("A sua idade em 2050 sera: %2.1f", idade_2050);

     return 0;
}