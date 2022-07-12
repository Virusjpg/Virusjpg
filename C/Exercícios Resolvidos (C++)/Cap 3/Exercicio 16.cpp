#include <stdio.h>
#include <math.h>
using namespace std;

/*Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e 
mostre o salário a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do salário mínimo.
b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalha.
c) o imposto equivale a 3% do salário bruto.
d) o salário a receber equivale ao salário bruto menos o imposto. */

int main()
{
float horas_t, valor_sm, salario_brt, vlr_hora_t, imp, vlr_sal_liq;

 printf ("Digite as horas trabalhadas: ");
 scanf ("%f%*c",&horas_t);
 printf ("Digite o valor do salario minimo: ");
 scanf ("%f%*c",&valor_sm);
 
 vlr_hora_t = valor_sm/2;
 salario_brt = vlr_hora_t*horas_t;
 imp = salario_brt*3/100;
 vlr_sal_liq = salario_brt - imp;

 printf ("O valor do salario liquido sera: %f", vlr_sal_liq);
     return 0;
}
