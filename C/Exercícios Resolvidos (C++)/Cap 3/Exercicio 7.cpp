#include <stdio.h>
using namespace std;

int main()
{
float sal, salreceber, grat, tax;

 printf ("Digite o salario do sujeito: ");
 scanf ("%f%*c",&sal);
 
 grat = 50;
 tax = sal*10/100;
 salreceber = sal + grat - tax;

 printf ("O salario do sujeito sera: %f", salreceber);
     return 0;
}