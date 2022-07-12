#include <stdio.h>
using namespace std;

int main()
{
float salario, novosal;
 
 printf ("O salário base do funcionário é: ");
 scanf ("%f%*c",&salario);

 novosal = salario+salario*25/100;
 
 printf ("Seu novo salário será: %5.4f",novosal);
     
     return 0;
}