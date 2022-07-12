#include <stdio.h> 
using namespace std;

/* Faça um programa sabendo que receba o salário base do funcionário, calcule e mostre o salario
a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto
de 7% também sobre o salário base*/

int main()
{
 float sal, salreceber, grat, imp;

 printf ("Valor do salario: ");
 scanf ("%f%*c",&sal);

 grat = sal*5/100;
 imp = sal*7/100;
 salreceber = sal + grat - imp;

 printf ("O valor do salario sera: %f",salreceber);
     return 0;

}